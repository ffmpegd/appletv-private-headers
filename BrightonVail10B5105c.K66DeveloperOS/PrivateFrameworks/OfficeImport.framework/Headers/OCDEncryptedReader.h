/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCDReader.h"

@class OCCDecryptor;

@interface OCDEncryptedReader : OCDReader {
	OCCDecryptor *mDecryptor;	// 32 = 0x20
}
@property(readonly, assign, nonatomic) OCCDecryptor *decryptor;	// G=0x37b0665d; @synthesize=mDecryptor
- (void)dealloc;	// 0x379304e1
// declared property getter: - (id)decryptor;	// 0x37b0665d
- (void)restartReaderToUseDecryptedDocument;	// 0x37b0666d
- (BOOL)retainDecryptorWithErrorCode:(int *)errorCode;	// 0x37b06651
- (void)useUnencryptedDocument;	// 0x378a86d1
@end

