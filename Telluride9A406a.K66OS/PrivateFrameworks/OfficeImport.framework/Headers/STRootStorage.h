/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "STStorage.h"

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface STRootStorage : STStorage {
@private
	RootStorage *m_pCRoot;	// 8 = 0x8
	NSMutableData *m_StorageData;	// 12 = 0xc
	void *m_pvBuf;	// 16 = 0x10
}
- (id)initWithMutableData:(id)mutableData andMode:(int)mode;	// 0x32adfd9d
- (id)initWithName:(id)name andMode:(int)mode;	// 0x32adfb7d
- (void)dealloc;	// 0x32adfcad
- (id)getDocumentProperty:(int)property withId:(int)anId PropType:(int *)type;	// 0x32adfa6d
- (id)getDocumentProperty:(int)property withId:(int)anId PropType:(int *)type throwOnError:(BOOL)error;	// 0x32adff39
- (long)getLongDocumentPropertyWithId:(int)anId givenPropStream:(int)stream;	// 0x32ae006d
- (short)getShortDocumentPropertyWithId:(int)anId givenPropStream:(int)stream;	// 0x32ae0169
- (id)getStringDocumentPropertyWithId:(int)anId givenPropStream:(int)stream;	// 0x32ae026d
- (void *)resizeStorageBuffer:(unsigned long)buffer;	// 0x32adfa1d
- (void)setBlobDocumentPropertyWithId:(int)anId to:(void *)to givenPropStream:(int)stream;	// 0x32adfb55
- (void)setDefaultDocumentProperties;	// 0x32ae0529
- (void)setDocumentProperty:(int)property withId:(int)anId AndType:(int)type AndValue:(void *)value;	// 0x32ae04b1
- (void)setLongDocumentPropertyWithId:(int)anId to:(long)to givenPropStream:(int)stream;	// 0x32adfafd
- (void)setShortDocumentPropertyWithId:(int)anId to:(short)to givenPropStream:(int)stream;	// 0x32adfb29
- (void)setStringDocumentPropertyWithId:(int)anId to:(id)to givenPropStream:(int)stream;	// 0x32adfa91
@end

