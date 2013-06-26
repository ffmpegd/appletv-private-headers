/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OCBReader.h"


@interface PBReader : OCBReader {
	PptObjectFactory *mPptObjectFactory;	// 44 = 0x2c
	const void *mBuffer;	// 48 = 0x30
}
@property(readonly, assign, nonatomic) PptBinaryReader *pptReader;	// G=0x347fde1d; 
- (id)initWithCancelDelegate:(id)cancelDelegate tracing:(id)tracing;	// 0x347fd4d1
- (OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(OCCCryptoKey *)cryptoKey baseOutputFilenameInUTF8:(const char *)utf8;	// 0x34a785a1
- (void)dealloc;	// 0x34889631
- (OCCEncryptionInfoReader *)encryptionInfoReader;	// 0x348022cd
// declared property getter: - (PptBinaryReader *)pptReader;	// 0x347fde1d
- (id)read;	// 0x348022f1
- (BOOL)start;	// 0x347fdaed
@end
