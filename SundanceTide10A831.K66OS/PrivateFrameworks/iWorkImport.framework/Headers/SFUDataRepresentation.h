/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSData;

@interface SFUDataRepresentation : NSObject {
	BOOL mHasHash;	// 4 = 0x4
	unsigned mHash;	// 8 = 0x8
	BOOL mHasSha1Hash;	// 12 = 0xc
	NSData *mSha1Hash;	// 16 = 0x10
}
- (id)bufferedInputStream;	// 0x35d6b115
- (id)bufferedInputStreamWithBufferSize:(unsigned long)bufferSize;	// 0x35d6b191
- (CGDataProviderRef)cgDataProvider;	// 0x35d6b859
- (int)compare:(id)compare;	// 0x35d6bdb9
- (long long)dataLength;	// 0x35d6b0f5
- (long long)encodedLength;	// 0x35d6b0fd
- (BOOL)hasSameLocationAs:(id)as;	// 0x35d6b1f5
- (unsigned)hash;	// 0x35d6ba01
- (id)inputStream;	// 0x35d6b111
- (BOOL)isEncrypted;	// 0x35d6b10d
- (BOOL)isEqual:(id)equal;	// 0x35d6bbbd
- (BOOL)isReadable;	// 0x35d6b0f1
- (unsigned long)readIntoData:(id)data;	// 0x35d6b891
- (id)sha1Hash;	// 0x35d6ba15
- (unsigned)uint32Hash;	// 0x35d6ba11
- (xmlDoc *)xmlDocument;	// 0x35d6b1f9
- (xmlTextReader *)xmlReader;	// 0x35d6b555
- (xmlTextReader *)xmlReaderForGzippedData;	// 0x35d6b6c9
- (xmlTextReader *)xmlReaderForGzippedDataWithInputStream:(id *)inputStream;	// 0x35d6b6dd
@end

