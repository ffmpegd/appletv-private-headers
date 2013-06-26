/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "SFUCryptoKey.h"


@interface SFUTangierCryptoKey : SFUCryptoKey {
	char *mKey;	// 8 = 0x8
	unsigned long mKeyLength;	// 12 = 0xc
}
- (id)initAes128KeyFromPassphrase:(const char *)passphrase length:(unsigned)length;	// 0x3692b11d
- (id)initAes128KeyFromPassphrase:(const char *)passphrase length:(unsigned)length iterationCount:(unsigned)count;	// 0x3692b141
- (void)dealloc;	// 0x3692b1e5
- (const char *)keyData;	// 0x3692b22d
- (unsigned long)keyLength;	// 0x3692b23d
@end
