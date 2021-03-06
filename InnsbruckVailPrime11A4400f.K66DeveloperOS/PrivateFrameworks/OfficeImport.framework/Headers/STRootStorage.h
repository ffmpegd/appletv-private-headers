/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "STStorage.h"

@class NSMutableData;

@interface STRootStorage : STStorage {
	RootStorage *m_pCRoot;	// 8 = 0x8
	NSMutableData *m_StorageData;	// 12 = 0xc
	void *m_pvBuf;	// 16 = 0x10
}
- (id)initWithMutableData:(id)mutableData andMode:(int)mode;	// 0x31906dcd
- (id)initWithName:(id)name andMode:(int)mode;	// 0x31906c9d
- (void)dealloc;	// 0x31906f59
- (id)getDocumentProperty:(int)property withId:(int)anId PropType:(int *)type;	// 0x31907095
- (id)getDocumentProperty:(int)property withId:(int)anId PropType:(int *)type throwOnError:(BOOL)error;	// 0x319070b9
- (long)getLongDocumentPropertyWithId:(int)anId givenPropStream:(int)stream;	// 0x319073fd
- (short)getShortDocumentPropertyWithId:(int)anId givenPropStream:(int)stream;	// 0x319074ed
- (id)getStringDocumentPropertyWithId:(int)anId givenPropStream:(int)stream;	// 0x319071c5
- (void *)resizeStorageBuffer:(unsigned long)buffer;	// 0x31907049
- (void)setBlobDocumentPropertyWithId:(int)anId to:(void *)to givenPropStream:(int)stream;	// 0x31907711
- (void)setDefaultDocumentProperties;	// 0x31907741
- (void)setDocumentProperty:(int)property withId:(int)anId AndType:(int)type AndValue:(void *)value;	// 0x319075e5
- (void)setLongDocumentPropertyWithId:(int)anId to:(long)to givenPropStream:(int)stream;	// 0x319076b9
- (void)setShortDocumentPropertyWithId:(int)anId to:(short)to givenPropStream:(int)stream;	// 0x319076e5
- (void)setStringDocumentPropertyWithId:(int)anId to:(id)to givenPropStream:(int)stream;	// 0x3190764d
@end

