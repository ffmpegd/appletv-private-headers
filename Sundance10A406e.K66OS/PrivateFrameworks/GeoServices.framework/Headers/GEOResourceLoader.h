/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray, NSString;
@protocol GEOResourceLoaderDelegate;

__attribute__((visibility("hidden")))
@interface GEOResourceLoader : NSObject {
	unsigned _tileGroupIdentifier;	// 4 = 0x4
	NSString *_uniqueTileGroupIdentifier;	// 8 = 0x8
	NSString *_directory;	// 12 = 0xc
	NSMutableArray *_resourcesToLoad;	// 16 = 0x10
	id _completionHandler;	// 20 = 0x14
	id _progressHandler;	// 24 = 0x18
	int _numberOfDownloadsInProgress;	// 28 = 0x1c
	NSMutableArray *_loadedResources;	// 32 = 0x20
	BOOL _canceled;	// 36 = 0x24
	NSString *_baseURLString;	// 40 = 0x28
	unsigned _maxConcurrentLoads;	// 44 = 0x2c
	id<GEOResourceLoaderDelegate> _delegate;	// 48 = 0x30
}
@property(assign, nonatomic) id<GEOResourceLoaderDelegate> delegate;	// G=0x379a4a8d; S=0x379a4a9d; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSArray *loadedResources;	// G=0x379a4aad; @synthesize=_loadedResources
@property(readonly, assign, nonatomic) unsigned tileGroupIdentifier;	// G=0x379a4a6d; @synthesize=_tileGroupIdentifier
@property(readonly, assign, nonatomic) NSString *uniqueTileGroupIdentifier;	// G=0x379a4a7d; @synthesize=_uniqueTileGroupIdentifier
- (id)initWithTileGroupIdentifier:(unsigned)tileGroupIdentifier uniqueIdentifier:(id)identifier targetDirectory:(id)directory baseURLString:(id)string isFirstLoad:(BOOL)load;	// 0x379a3d3d
- (void)_addNecessaryResourcesForType:(int)type;	// 0x379a3f19
- (void)_cleanup;	// 0x379a3ec9
- (void)_loadNextResource;	// 0x379a42a1
- (BOOL)_writeResourceToDisk:(id)disk;	// 0x379a48e5
- (void)cancel;	// 0x379a4a4d
- (void)dealloc;	// 0x379a3e01
// declared property getter: - (id)delegate;	// 0x379a4a8d
// declared property getter: - (id)loadedResources;	// 0x379a4aad
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x379a4a9d
- (void)startWithProgressHandler:(id)progressHandler completionHandler:(id)handler;	// 0x379a41b5
// declared property getter: - (unsigned)tileGroupIdentifier;	// 0x379a4a6d
// declared property getter: - (id)uniqueTileGroupIdentifier;	// 0x379a4a7d
@end

