# Selsius Keygen
<small>For the CallManager that came before Cisco</small>

CallManager 2.01 can be downloaded here: https://archive.org/details/selsius-callmanager

## Table of Contents

  - [Preamble](#preamble)
  - [Usage](#usage)
  - [License Syntax](#license-syntax)
  - [Keygen Mechanics](#keygen-mechanics)

## Preamble

This program generates valid licenses and their associated keys for Selsius CallManager 2.x, which are required to connect a desk phone or gateway to it. These keys were required for a brief period before Cisco's acquisition of Selsius Systems, which subsequently removed the licensing algorithm from future versions to later implement a more robust system.

The licensing algorithm for this program has been reverse engineered from the original binaries of CallManager 2.01 and has been reimplemented in a way that lets us generate valid keys for any given license. (Or any string for that matter, though it wouldn't be able to tell how many licenses you have.)

## Usage
All you need to do is specify what type of license you want, and how many licenses you wish to generate. For CallManager 2, there are two distinct types of licenses: Selsius Stations, and Access Ports. Selsius Station licenses allow you to register a phone to CallManager, with one license consumed for each phone registered, with the exception of the first 5 VirtualPhone registrations. Access Port licenses let you use Selsius Gateways to connect analog phones or to make calls out to the PSTN.

To generate a license, you can pick from three options:
1. Generate Selsius Station licenses
1. Generate Access Port licenses
1. Generate both licenses

You can then specify the number of licenses you wish to generate for each type, and you should get something like `02N-Q5482760-S2T4`, which, in this example, means two Selsius Station licenses, and four Access Port licenses. You should also get an associated key to go along with the license to add it to CallManager.

## License Syntax

Let's break down the following license: `02N-Q5482760-S2T4`

The first two digits signify the version of the license. As far as I can tell, it doesn't really do much, but shows up as a nice stat on the CallManager dashboard.

The letter N signifies that this is a new license to be added to CallManager. Upgrade licenses use the letter U instead.

This part of the license, `-Q5482760-`, can be whatever you want it to be. I'm not quite sure what Q does, but changing it doesn't seem to affect the license at all, nor does changing the dashes. I assume this part of the license makes up the "serial number" of the license to make sure each license is unique and/or trackable.

Finally, we have `S2T4`. S2 signifies that there are two Selsius Station licenses, and T4 signifies that there are four Access Port licenses. It also doesn't seem to matter which order the licenses come in, as `T4S2` also works just as fine.

## Keygen Mechanics

The way CallManager 2 verifies a license is what I've found to be most intriguing. The license is hashed with a unique algorithm that does a lot of character swapping. I'd go into detail about how it exactly works but it'd take me quite a while. You can go through the source code to check it out for yourself.

The result is a 16 character string that is unique to that license, meaning any given license will always generate the exact same key. Once the keypair is given to CallManager, it generates a key from your license and matches it against your key, verifying that your license is authentic. When CallManager needs to calculate how many licenses you have and how many are being used, it will fetch all of the valid licenses in its database and tally them up.
