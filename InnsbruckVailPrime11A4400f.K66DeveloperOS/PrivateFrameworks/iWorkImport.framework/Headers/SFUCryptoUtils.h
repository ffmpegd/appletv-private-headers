/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import </libobjc.A.h>


@interface SFUCryptoUtils : NSObject {
}
+ (BOOL)checkKey:(id)key againstPassphraseVerifier:(id)verifier;	// 0x33d2175d
+ (id)decodePassphraseHint:(id)hint;	// 0x33d21cb1
+ (id)encodePassphraseHint:(id)hint;	// 0x33d21c9d
+ (id)generatePassphraseVerifierForKey:(id)key;	// 0x33d21691
+ (BOOL)generateRandomDataInBuffer:(char *)buffer length:(unsigned long)length;	// 0x33d21621
+ (BOOL)isEncryptionVersionAndFormatSupportedInPassphraseVerifier:(id)passphraseVerifier;	// 0x33d219b9
+ (unsigned)iterationCountFromPassphraseVerifier:(id)passphraseVerifier;	// 0x33d21695
+ (unsigned)ivLengthForKey:(id)key;	// 0x33d2166d
+ (id)newBufferedInputStreamForDecryptingFile:(id)decryptingFile key:(id)key isDeflated:(BOOL)deflated zipStream:(id *)stream;	// 0x33d219fd
+ (id)newBufferedInputStreamForDecryptingZippedBundle:(id)decryptingZippedBundle key:(id)key zipArchive:(id)archive isDeflated:(BOOL)deflated zipStream:(id *)stream;	// 0x33d21b45
+ (id)sha1HashFromStorage:(id)storage;	// 0x33d21ec9
+ (id)sha256HashFromData:(id)data;	// 0x33d21d2d
+ (id)sha256HashFromStorage:(id)storage;	// 0x33d21dc5
+ (id)sha256HashFromString:(id)string;	// 0x33d21e95
@end
