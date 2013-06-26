/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class SSXPCConnection;

@interface SSDownloadFileManifest : NSObject {
	SSXPCConnection *_connection;	// 4 = 0x4
	int _manifestType;	// 8 = 0x8
}
@property(readonly, assign) int manifestType;	// G=0x354fb289; 
- (id)init;	// 0x354faedd
- (id)initWithManifestType:(int)manifestType;	// 0x354faef1
- (void)_removeItemsWithAssetPaths:(id)assetPaths completionBlock:(id)block;	// 0x354fb4b1
- (void)dealloc;	// 0x354faf7d
- (void)getPathsForFilesWithClass:(int)aClass completionBlock:(id)block;	// 0x354fafc9
// declared property getter: - (int)manifestType;	// 0x354fb289
- (void)rebuildManifestWithCompletionBlock:(id)completionBlock;	// 0x354fb299
- (void)removeItemWithAssetPath:(id)assetPath completionBlock:(id)block;	// 0x354fb36d
- (void)removeItemsWithAssetPaths:(id)assetPaths completionBlock:(id)block;	// 0x354fb439
@end
