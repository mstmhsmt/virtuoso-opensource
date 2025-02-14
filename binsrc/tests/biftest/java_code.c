/*
 *
 *  This file is part of the OpenLink Software Virtuoso Open-Source (VOS)
 *  project.
 *
 *  Copyright (C) 1998-2022 OpenLink Software
 *
 *  This project is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License as published by the
 *  Free Software Foundation; only version 2 of the License, dated June 1991.
 *
 *  This program is distributed in the hope that it will be useful, but
 *  WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 *  General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 *
 */

char *bpel_adaptor=
"yv66vgAAAC4AEQoAAwAOBwAPBwAQAQAGPGluaXQ+AQADKClWAQAEQ29kZQEA"
"D0xpbmVOdW1iZXJUYWJsZQEADGdldF92YXJfZGF0YQEAbihMamF2YS9sYW5n"
"L1N0cmluZztMamF2YS9sYW5nL1N0cmluZztMamF2YS9sYW5nL1N0cmluZztM"
"amF2YS9sYW5nL1N0cmluZztMamF2YS9sYW5nL1N0cmluZzspTGphdmEvbGFu"
"Zy9PYmplY3Q7AQAMc2V0X3Zhcl9kYXRhAQCAKExqYXZhL2xhbmcvU3RyaW5n"
"O0xqYXZhL2xhbmcvU3RyaW5nO0xqYXZhL2xhbmcvU3RyaW5nO0xqYXZhL2xh"
"bmcvT2JqZWN0O0xqYXZhL2xhbmcvU3RyaW5nO0xqYXZhL2xhbmcvU3RyaW5n"
"OylMamF2YS9sYW5nL1N0cmluZzsBAApTb3VyY2VGaWxlAQAUQnBlbFZhcnNB"
"ZGFwdG9yLmphdmEMAAQABQEAD0JwZWxWYXJzQWRhcHRvcgEAEGphdmEvbGFu"
"Zy9PYmplY3QAIQACAAMAAAAAAAMAAQAEAAUAAQAGAAAAHQABAAEAAAAFKrcA"
"AbEAAAABAAcAAAAGAAEAAAABAQEACAAJAAABAQAKAAsAAAABAAwAAAACAA0="
;

char *virt_helper=
"yv66vgAAAC4AXgoAHAAuBwAvCgACADAHADEKAAQAMgoABAAzBwA0CgAHAC4H"
"ADUKAAkANgoACQA3CgAJADgKAAcAOQoAOgA7BwA8CgAPAC4KADoAPQoAPgA/"
"BwBACgATAC4KAD4AQQcAQgcAQwoAFwAuCgA+AEQJABsARQcARgcARwEAF19h"
"cHBsaWNhdGlvblRocmVhZEdyb3VwAQAXTGphdmEvbGFuZy9UaHJlYWRHcm91"
"cDsBAAY8aW5pdD4BAAMoKVYBAARDb2RlAQAPTGluZU51bWJlclRhYmxlAQAL"
"ZGVzZXJpYWxpemUBABYoW0IpTGphdmEvbGFuZy9PYmplY3Q7AQAKRXhjZXB0"
"aW9ucwEACXNlcmlhbGl6ZQEAFihMamF2YS9sYW5nL09iamVjdDspW0IBABJz"
"ZXRfYWNjZXNzX2dyYW50ZXIBABVzZXRfdW5yZXN0aWN0ZWRfcGVybXMBABNz"
"ZXRfcmVzdGljdGVkX3Blcm1zAQAIPGNsaW5pdD4BAApTb3VyY2VGaWxlAQAS"
"X192aXJ0X2hlbHBlci5qYXZhDAAfACABABxqYXZhL2lvL0J5dGVBcnJheUlu"
"cHV0U3RyZWFtDAAfAEgBABlqYXZhL2lvL09iamVjdElucHV0U3RyZWFtDAAf"
"AEkMAEoASwEAHWphdmEvaW8vQnl0ZUFycmF5T3V0cHV0U3RyZWFtAQAaamF2"
"YS9pby9PYmplY3RPdXRwdXRTdHJlYW0MAB8ATAwATQBODABPACAMAFAAUQcA"
"UgwAUwBUAQAVX192aXJ0X2FjY2Vzc19ncmFudGVyDABVAFYHAFcMAFgAWQEA"
"Fl9fdmlydF9jbGFzc19sb2FkZXJfdXIMAFoAWwEAE2phdmEvbGFuZy9FeGNl"
"cHRpb24BABVfX3ZpcnRfY2xhc3NfbG9hZGVyX3IMAFwAXQwAHQAeAQANX192"
"aXJ0X2hlbHBlcgEAEGphdmEvbGFuZy9PYmplY3QBAAUoW0IpVgEAGChMamF2"
"YS9pby9JbnB1dFN0cmVhbTspVgEACnJlYWRPYmplY3QBABQoKUxqYXZhL2xh"
"bmcvT2JqZWN0OwEAGShMamF2YS9pby9PdXRwdXRTdHJlYW07KVYBAAt3cml0"
"ZU9iamVjdAEAFShMamF2YS9sYW5nL09iamVjdDspVgEABWZsdXNoAQALdG9C"
"eXRlQXJyYXkBAAQoKVtCAQAQamF2YS9sYW5nL1N5c3RlbQEAEmdldFNlY3Vy"
"aXR5TWFuYWdlcgEAHSgpTGphdmEvbGFuZy9TZWN1cml0eU1hbmFnZXI7AQAS"
"c2V0U2VjdXJpdHlNYW5hZ2VyAQAeKExqYXZhL2xhbmcvU2VjdXJpdHlNYW5h"
"Z2VyOylWAQAQamF2YS9sYW5nL1RocmVhZAEADWN1cnJlbnRUaHJlYWQBABQo"
"KUxqYXZhL2xhbmcvVGhyZWFkOwEAFXNldENvbnRleHRDbGFzc0xvYWRlcgEA"
"GihMamF2YS9sYW5nL0NsYXNzTG9hZGVyOylWAQAOZ2V0VGhyZWFkR3JvdXAB"
"ABkoKUxqYXZhL2xhbmcvVGhyZWFkR3JvdXA7ACEAGwAcAAAAAQAaAB0AHgAA"
"AAcAAQAfACAAAQAhAAAAHQABAAEAAAAFKrcAAbEAAAABACIAAAAGAAEAAAAE"
"AAEAIwAkAAIAIQAAAEEAAwAGAAAAHbsAAlkrtwADTrsABFkttwAFOgQZBLYA"
"BjoFGQWwAAAAAQAiAAAAEgAEAAAADAAJAA0AEwAPABoAEQAlAAAABAABABYA"
"AQAmACcAAgAhAAAATwADAAUAAAAjuwAHWbcACE27AAlZLLcACk4tK7YACy22"
"AAwstgANOgQZBLAAAAABACIAAAAaAAYAAAAWAAgAFwARABkAFgAbABoAHQAg"
"AB8AJQAAAAQAAQAWAAEAKAAgAAIAIQAAADEAAgABAAAAEbgADscADbsAD1m3"
"ABC4ABGxAAAAAQAiAAAADgADAAAAJAAGACUAEAAnACUAAAAEAAEAFgABACkA"
"IAACACEAAAA+AAMAAgAAABK4ABK7ABNZtwAUtgAVpwAETLEAAQAAAA0AEAAW"
"AAEAIgAAABIABAAAAC0ADQAyABAALwARADUAJQAAAAQAAQAWAAEAKgAgAAIA"
"IQAAAD4AAwACAAAAErgAErsAF1m3ABi2ABWnAARMsQABAAAADQAQABYAAQAi"
"AAAAEgAEAAAAOwANAEAAEAA9ABEAQQAlAAAABAABABYACAArACAAAQAhAAAA"
"IgABAAAAAAAKuAAStgAZswAasQAAAAEAIgAAAAYAAQAAAAYAAQAsAAAAAgAt"
;

char *virt_class_loader_r=
"yv66vgAAAC4ADQoAAwAKBwALBwAMAQAGPGluaXQ+AQADKClWAQAEQ29kZQEA"
"D0xpbmVOdW1iZXJUYWJsZQEAClNvdXJjZUZpbGUBABpfX3ZpcnRfY2xhc3Nf"
"bG9hZGVyX3IuamF2YQwABAAFAQAVX192aXJ0X2NsYXNzX2xvYWRlcl9yAQAV"
"amF2YS9sYW5nL0NsYXNzTG9hZGVyACEAAgADAAAAAAABAAEABAAFAAEABgAA"
"ACEAAQABAAAABSq3AAGxAAAAAQAHAAAACgACAAAABAAEAAYAAQAIAAAAAgAJ"
;

char *virt_class_loader_ur=
"yv66vgAAAC4ADQoAAwAKBwALBwAMAQAGPGluaXQ+AQADKClWAQAEQ29kZQEA"
"D0xpbmVOdW1iZXJUYWJsZQEAClNvdXJjZUZpbGUBABtfX3ZpcnRfY2xhc3Nf"
"bG9hZGVyX3VyLmphdmEMAAQABQEAFl9fdmlydF9jbGFzc19sb2FkZXJfdXIB"
"ABVqYXZhL2xhbmcvQ2xhc3NMb2FkZXIAIQACAAMAAAAAAAEAAQAEAAUAAQAG"
"AAAAIQABAAEAAAAFKrcAAbEAAAABAAcAAAAKAAIAAAAEAAQABgABAAgAAAAC"
"AAk="
;

char *virt_access_granter=
"yv66vgAAAC4AQAoADwAcCgAdAB4KAB0AHwoAIAAhBwAiCgAPACMKACQAJQoA"
"JAAmCAAnCgAkACgKAAwAIwcAKQoADAAcCgAqACsHACwBAAY8aW5pdD4BAAMo"
"KVYBAARDb2RlAQAPTGluZU51bWJlclRhYmxlAQAPY2hlY2tQZXJtaXNzaW9u"
"AQAdKExqYXZhL3NlY3VyaXR5L1Blcm1pc3Npb247KVYBAApFeGNlcHRpb25z"
"BwAtAQAvKExqYXZhL3NlY3VyaXR5L1Blcm1pc3Npb247TGphdmEvbGFuZy9P"
"YmplY3Q7KVYBABJzZXRfYWNjZXNzX2dyYW50ZXIBAApTb3VyY2VGaWxlAQAa"
"X192aXJ0X2FjY2Vzc19ncmFudGVyLmphdmEMABAAEQcALgwALwAwDAAxADIH"
"ADMMADQANQEAE2phdmEvbGFuZy9FeGNlcHRpb24MABQAFQcANgwANwA4DAA5"
"ADoBABZfX3ZpcnRfY2xhc3NfbG9hZGVyX3VyDAA7ADwBABVfX3ZpcnRfYWNj"
"ZXNzX2dyYW50ZXIHAD0MAD4APwEAG2phdmEvcm1pL1JNSVNlY3VyaXR5TWFu"
"YWdlcgEAG2phdmEvbGFuZy9TZWN1cml0eUV4Y2VwdGlvbgEAEGphdmEvbGFu"
"Zy9UaHJlYWQBAA1jdXJyZW50VGhyZWFkAQAUKClMamF2YS9sYW5nL1RocmVh"
"ZDsBABVnZXRDb250ZXh0Q2xhc3NMb2FkZXIBABkoKUxqYXZhL2xhbmcvQ2xh"
"c3NMb2FkZXI7AQAQamF2YS9sYW5nL09iamVjdAEACHRvU3RyaW5nAQAUKClM"
"amF2YS9sYW5nL1N0cmluZzsBABBqYXZhL2xhbmcvU3RyaW5nAQAHaW5kZXhP"
"ZgEABChJKUkBAAlzdWJzdHJpbmcBABYoSUkpTGphdmEvbGFuZy9TdHJpbmc7"
"AQAGZXF1YWxzAQAVKExqYXZhL2xhbmcvT2JqZWN0OylaAQAQamF2YS9sYW5n"
"L1N5c3RlbQEAEnNldFNlY3VyaXR5TWFuYWdlcgEAHihMamF2YS9sYW5nL1Nl"
"Y3VyaXR5TWFuYWdlcjspVgAhAAwADwAAAAAABAABABAAEQABABIAAAAdAAEA"
"AQAAAAUqtwABsQAAAAEAEwAAAAYAAQAAAAkAAQAUABUAAgASAAAAqAAEAAYA"
"AABEuAACtgADtgAETqcACzoFKiu3AAaxLQMtEEC2AAe2AAhNLAMQE7YACDoE"
"pwALOgUqK7cABrEsEgm2AAqaAAgqK7cABrEAAwAAAAoADQAFAAAAFAAtAAUA"
"FQAqAC0ABQABABMAAAA6AA4AAAAUAAoAGgANABYADwAYABQAGQAVABwAIQAd"
"ACoAJAAtACAALwAiADQAIwA1ACYAPgAqAEMALAAWAAAABAABABcAAQAUABgA"
"AQASAAAAIgACAAMAAAAGKiu2AAuxAAAAAQATAAAACgACAAAAMAAFADEAAQAZ"
"ABEAAQASAAAAJwACAAEAAAALuwAMWbcADbgADrEAAAABABMAAAAKAAIAAAA1"
"AAoANgABABoAAAACABs="
;

