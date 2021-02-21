# BruOS a 64-bit Operating System Kernel

## Prerequisiti

- Un editor di testo come [VSCode](https://code.visualstudio.com/).
- [Docker](https://www.docker.com/) per creare il "build-environment".
- [Qemu](https://www.qemu.org/) per emulare il sistema operativo.
- NOTA: Ricordate di aggiungere QEMU alla variabile PATH per eseguire da riga di comando. ([Come Fare](https://dev.to/whaleshark271/using-qemu-on-windows-10-home-edition-4062))

## Setup

Crea un immagine per il "build-environment"

- `docker build buildenv -t bruos-buildenv`

## Build

Per accedere al container docker:
 - Linux o MacOS: `docker run --rm -it -v "$pwd":/root/env bruos-buildenv`
 - Windows (CMD): `docker run --rm -it -v "%cd%":/root/env bruos-buildenv`
 - Windows (PowerShell): `docker run --rm -it -v "${pwd}":/root/env bruos-buildenv`

Crea per x86:
 - `make build-x86-64`

Per uscire dal container, inserisci `exit`.

## Emulare

Puoi avviare l'emulazione del sistema operativo utilizzando [Qemu](https://www.qemu.org/): (RICORDATI DI AGGIUNGERLO A PATH)

 - `qemu-system-x86_64 -cdrom dist/x86_64/kernel.iso`

## Pulizia

Rimuovi il container docker:

- `docker rmi bruos-buildenv -f`