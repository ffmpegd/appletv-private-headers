/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

#import "AppSupport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSCache, NSString;

@interface CPBitmapStore : NSObject {
	NSString *_path;	// 4 = 0x4
	NSString *_imagePath;	// 8 = 0x8
	sqlite3 *_db;	// 12 = 0xc
	sqlite3_stmt *_findStmt;	// 16 = 0x10
	sqlite3_stmt *_saveStmt;	// 20 = 0x14
	sqlite3_stmt *_beginStmt;	// 24 = 0x18
	sqlite3_stmt *_commitStmt;	// 28 = 0x1c
	BOOL _dbIsReadOnly;	// 32 = 0x20
	BOOL _dbIsMissing;	// 33 = 0x21
	CFRunLoopObserverRef _txnObserver;	// 36 = 0x24
	NSCache *_cache;	// 40 = 0x28
	int _version;	// 44 = 0x2c
}
@property(readonly, assign) sqlite3_stmt *beginStmt;	// G=0x36f50761; converted property
@property(readonly, assign) sqlite3_stmt *commitStmt;	// G=0x36f50721; converted property
@property(readonly, assign) sqlite3 *db;	// G=0x36f5064d; converted property
@property(readonly, assign) sqlite3_stmt *findStmt;	// G=0x36f507e1; converted property
@property(readonly, retain) NSString *imagePath;	// G=0x36f4ff91; converted property
@property(readonly, assign) sqlite3_stmt *saveStmt;	// G=0x36f507a1; converted property
@property(readonly, assign, nonatomic) int version;	// G=0x36f502cd; 
- (id)initWithPath:(id)path version:(int)version;	// 0x36f50071
- (id)allGroups;	// 0x36f50ce5
- (void)beginAutoTxn;	// 0x36f503f5
// converted property getter: - (sqlite3_stmt *)beginStmt;	// 0x36f50761
// converted property getter: - (sqlite3_stmt *)commitStmt;	// 0x36f50721
- (void)commitTxn;	// 0x36f50399
- (CGImageRef)copyAndStoreImageForKey:(id)key inGroup:(id)group withSize:(CGSize)size opaque:(BOOL)opaque scale:(float)scale draw:(id)draw;	// 0x36f50ddd
- (CGImageRef)copyImageForKey:(id)key;	// 0x36f511f5
- (void)createDbAt:(const char *)at;	// 0x36f5047d
// converted property getter: - (sqlite3 *)db;	// 0x36f5064d
- (id)dbPath;	// 0x36f4ffe9
- (void)dealloc;	// 0x36f512cd
- (BOOL)findImageWithKey:(id)key andInfo:(img *)info;	// 0x36f5093d
// converted property getter: - (sqlite3_stmt *)findStmt;	// 0x36f507e1
- (int)imageCount;	// 0x36f50011
// converted property getter: - (id)imagePath;	// 0x36f4ff91
- (void)purge;	// 0x36f50335
- (void)removeImagesInGroups:(id)groups;	// 0x36f50aa1
- (BOOL)saveImageWithKey:(id)key inGroup:(id)group andInfo:(img *)info;	// 0x36f50821
// converted property getter: - (sqlite3_stmt *)saveStmt;	// 0x36f507a1
- (int)setVersion:(int)version;	// 0x36f5026d
// declared property getter: - (int)version;	// 0x36f502cd
@end

