/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library
#import "AVAsynchronousKeyValueLoading.h"
#import "NSCopying.h"

@class NSArray, NSString, NSURL, AVAssetCache, AVWeakReference;

@interface AVAssetInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
	AVWeakReference *_weakReference;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x317b33ad; 
@property(readonly, assign, nonatomic) AVAssetCache *assetCache;	// G=0x317b3411; 
@property(readonly, assign, nonatomic) NSArray *chapterGroupInfo;	// G=0x317b340d; 
@property(readonly, assign, nonatomic, getter=isCompatibleWithSavedPhotosAlbum) BOOL compatibleWithSavedPhotosAlbum;	// G=0x317b3409; 
@property(readonly, assign, nonatomic, getter=isComposable) BOOL composable;	// G=0x317b3405; 
@property(readonly, assign, nonatomic) NSURL *downloadDestinationURL;	// G=0x317b3421; 
@property(readonly, assign, nonatomic) unsigned long long downloadToken;	// G=0x317b3425; 
@property(readonly, assign, nonatomic) XXStruct_pwHToB duration;	// G=0x317b33bd; 
@property(readonly, assign, nonatomic, getter=isExportable) BOOL exportable;	// G=0x317b33fd; 
@property(readonly, assign, nonatomic, getter=_figAsset) OpaqueFigAsset *figAsset;	// G=0x317b33b5; 
@property(readonly, assign, nonatomic, getter=_formatReader) OpaqueFigFormatReader *formatReader;	// G=0x317b33b1; 
@property(readonly, assign, nonatomic) BOOL hasProtectedContent;	// G=0x317b342d; 
@property(readonly, assign, nonatomic) NSString *lyrics;	// G=0x317b33f5; 
@property(readonly, assign, nonatomic, getter=isPlayable) BOOL playable;	// G=0x317b33f9; 
@property(readonly, assign, nonatomic, getter=_playbackItem) OpaqueFigPlaybackItem *playbackItem;	// G=0x317b33b9; 
@property(readonly, assign, nonatomic, getter=isReadable) BOOL readable;	// G=0x317b3401; 
@property(readonly, assign, nonatomic) unsigned referenceRestrictions;	// G=0x317b34a1; 
@property(readonly, assign, nonatomic) NSURL *resolvedURL;	// G=0x317b341d; 
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLPathComponentOnly;	// G=0x317b3415; 
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;	// G=0x317b3419; 
@property(readonly, assign, nonatomic, getter=_isStreaming) BOOL streaming;	// G=0x317b3431; 
@property(readonly, assign, nonatomic, getter=_weakReference) AVWeakReference *weakReference;	// G=0x317b32d1; 
+ (void)initialize;	// 0x317b31fd
- (id)init;	// 0x317b324d
- (id)initWithURL:(id)url;	// 0x317b3261
// declared property getter: - (id)URL;	// 0x317b33ad
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)keyAreLoaded;	// 0x317b3435
// declared property getter: - (OpaqueFigAsset *)_figAsset;	// 0x317b33b5
// declared property getter: - (OpaqueFigFormatReader *)_formatReader;	// 0x317b33b1
// declared property getter: - (BOOL)_isStreaming;	// 0x317b3431
- (id)_mapFigErrorCodeToNSError:(long)nserror;	// 0x317b344d
// declared property getter: - (OpaqueFigPlaybackItem *)_playbackItem;	// 0x317b33b9
- (void)_serverHasDied;	// 0x317b34a5
// declared property getter: - (id)_weakReference;	// 0x317b32d1
// declared property getter: - (id)assetCache;	// 0x317b3411
- (id)assetInspector;	// 0x317b33a5
- (void)cancelLoading;	// 0x317b33a9
// declared property getter: - (id)chapterGroupInfo;	// 0x317b340d
- (id)copyWithZone:(NSZone *)zone;	// 0x317b332d
- (void)dealloc;	// 0x317b32e1
// declared property getter: - (id)downloadDestinationURL;	// 0x317b3421
// declared property getter: - (unsigned long long)downloadToken;	// 0x317b3425
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x317b33bd
// declared property getter: - (BOOL)hasProtectedContent;	// 0x317b342d
// declared property getter: - (BOOL)isCompatibleWithSavedPhotosAlbum;	// 0x317b3409
// declared property getter: - (BOOL)isComposable;	// 0x317b3405
// declared property getter: - (BOOL)isExportable;	// 0x317b33fd
// declared property getter: - (BOOL)isPlayable;	// 0x317b33f9
// declared property getter: - (BOOL)isReadable;	// 0x317b3401
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x317b3371
- (void)loadValuesAsynchronouslyForKeys:(id)keys keysForCollectionKeys:(id)collectionKeys completionHandler:(id)handler;	// 0x317b3439
// declared property getter: - (id)lyrics;	// 0x317b33f5
// declared property getter: - (unsigned)referenceRestrictions;	// 0x317b34a1
// declared property getter: - (id)resolvedURL;	// 0x317b341d
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;	// 0x317b3415
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;	// 0x317b3419
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x317b333d
@end

