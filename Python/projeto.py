#!/usr/bin/python3
import requests
import time
ptax=requests.get('http://www.bndes.gov.br/Moedas/um788.txt')
type(ptax)

try:{
     
	ptax.raise_for_status()
    
}

except Exception as exc:{
        
	print('There was a problem: %s' %(exc))

}

print(ptax.text[:10000])
codeptax=open('um788.txt','wb')

for chunk in ptax.iter_content(100000):{

        codeptax.write(chunk)

}

codeptax.close() 
