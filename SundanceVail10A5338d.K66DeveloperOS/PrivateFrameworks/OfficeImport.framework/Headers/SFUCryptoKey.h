/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


@interface SFUCryptoKey : NSObject {
	unsigned mIterationCount;	// 4 = 0x4
}
- (id)initAes128KeyFromPassphrase:(const char *)passphrase length:(unsigned)length;	// 0x33c18ce1
- (id)initAes128KeyFromPassphrase:(const char *)passphrase length:(unsigned)length iterationCount:(unsigned)count;	// 0x33c18d05
- (unsigned)iterationCount;	// 0x33c18d55
- (int)keyType;	// 0x33c18d51
@end

