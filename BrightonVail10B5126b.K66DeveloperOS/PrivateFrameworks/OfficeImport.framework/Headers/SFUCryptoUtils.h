/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


@interface SFUCryptoUtils : NSObject {
}
+ (BOOL)checkKey:(id)key againstPassphraseVerifier:(id)verifier;	// 0x34ac5899
+ (id)decodePassphraseHint:(id)hint;	// 0x34ac5cc1
+ (id)encodePassphraseHint:(id)hint;	// 0x34ac5cad
+ (id)generatePassphraseVerifierForKey:(id)key;	// 0x34ac5365
+ (BOOL)generateRandomDataInBuffer:(char *)buffer length:(unsigned long)length;	// 0x34ac52f5
+ (BOOL)isEncryptionVersionAndFormatSupportedInPassphraseVerifier:(id)passphraseVerifier;	// 0x34ac5b21
+ (unsigned)iterationCountFromPassphraseVerifier:(id)passphraseVerifier;	// 0x34ac57d1
+ (unsigned)ivLengthForKey:(id)key;	// 0x34ac5341
+ (id)retainedBufferedInputStreamForDecryptingFile:(id)decryptingFile key:(id)key isDeflated:(BOOL)deflated zipStream:(id *)stream;	// 0x34ac5b65
+ (id)sha1HashFromStorage:(id)storage;	// 0x34ac5ee5
+ (id)sha256HashFromData:(id)data;	// 0x34ac5d3d
+ (id)sha256HashFromStorage:(id)storage;	// 0x34ac5dd9
+ (id)sha256HashFromString:(id)string;	// 0x34ac5eb1
@end

