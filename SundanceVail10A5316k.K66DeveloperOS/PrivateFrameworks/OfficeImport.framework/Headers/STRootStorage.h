/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "STStorage.h"
#import "OfficeImport-Structs.h"

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface STRootStorage : STStorage {
@private
	RootStorage *m_pCRoot;	// 8 = 0x8
	NSMutableData *m_StorageData;	// 12 = 0xc
	void *m_pvBuf;	// 16 = 0x10
}
- (id)initWithMutableData:(id)mutableData andMode:(int)mode;	// 0x31269f65
- (id)initWithName:(id)name andMode:(int)mode;	// 0x31269e35
- (void)dealloc;	// 0x3126a0e5
- (id)getDocumentProperty:(int)property withId:(int)anId PropType:(int *)type;	// 0x3126a215
- (id)getDocumentProperty:(int)property withId:(int)anId PropType:(int *)type throwOnError:(BOOL)error;	// 0x3126a239
- (long)getLongDocumentPropertyWithId:(int)anId givenPropStream:(int)stream;	// 0x3126a589
- (short)getShortDocumentPropertyWithId:(int)anId givenPropStream:(int)stream;	// 0x3126a679
- (id)getStringDocumentPropertyWithId:(int)anId givenPropStream:(int)stream;	// 0x3126a34d
- (void *)resizeStorageBuffer:(unsigned long)buffer;	// 0x3126a1c9
- (void)setBlobDocumentPropertyWithId:(int)anId to:(void *)to givenPropStream:(int)stream;	// 0x3126a899
- (void)setDefaultDocumentProperties;	// 0x3126a8c1
- (void)setDocumentProperty:(int)property withId:(int)anId AndType:(int)type AndValue:(void *)value;	// 0x3126a775
- (void)setLongDocumentPropertyWithId:(int)anId to:(long)to givenPropStream:(int)stream;	// 0x3126a841
- (void)setShortDocumentPropertyWithId:(int)anId to:(short)to givenPropStream:(int)stream;	// 0x3126a86d
- (void)setStringDocumentPropertyWithId:(int)anId to:(id)to givenPropStream:(int)stream;	// 0x3126a7d5
@end
