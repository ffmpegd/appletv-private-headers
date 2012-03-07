/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"
#import "AVAsynchronousKeyValueLoading.h"
#import "NSCopying.h"

@class AVAssetCache, AVWeakReference, NSArray, NSURL, NSString;

@interface AVAssetInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading> {
@private
	AVWeakReference *_weakReference;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x3549c821; 
@property(readonly, assign, nonatomic) AVAssetCache *assetCache;	// G=0x3549c871; 
@property(readonly, assign, nonatomic) NSArray *chapterGroupInfo;	// G=0x3549c86d; 
@property(readonly, assign, nonatomic, getter=isCompatibleWithSavedPhotosAlbum) BOOL compatibleWithSavedPhotosAlbum;	// G=0x3549c869; 
@property(readonly, assign, nonatomic, getter=isComposable) BOOL composable;	// G=0x3549c865; 
@property(readonly, assign, nonatomic) NSURL *downloadDestinationURL;	// G=0x3549c881; 
@property(readonly, assign, nonatomic) XXStruct_pwHToB duration;	// G=0x3549c831; 
@property(readonly, assign, nonatomic, getter=isExportable) BOOL exportable;	// G=0x3549c85d; 
@property(readonly, assign, nonatomic, getter=_figAsset) OpaqueFigAsset *figAsset;	// G=0x3549c829; 
@property(readonly, assign, nonatomic, getter=_formatReader) OpaqueFigFormatReader *formatReader;	// G=0x3549c825; 
@property(readonly, assign, nonatomic) BOOL hasProtectedContent;	// G=0x3549c885; 
@property(readonly, assign, nonatomic) NSString *lyrics;	// G=0x3549c855; 
@property(readonly, assign, nonatomic, getter=isPlayable) BOOL playable;	// G=0x3549c859; 
@property(readonly, assign, nonatomic, getter=_playbackItem) OpaqueFigPlaybackItem *playbackItem;	// G=0x3549c82d; 
@property(readonly, assign, nonatomic, getter=isReadable) BOOL readable;	// G=0x3549c861; 
@property(readonly, assign, nonatomic) unsigned referenceRestrictions;	// G=0x3549c891; 
@property(readonly, assign, nonatomic) NSURL *resolvedURL;	// G=0x3549c87d; 
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLPathComponentOnly;	// G=0x3549c875; 
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;	// G=0x3549c879; 
@property(readonly, assign, nonatomic, getter=_isStreaming) BOOL streaming;	// G=0x3549c889; 
@property(readonly, assign, nonatomic, getter=_weakReference) AVWeakReference *weakReference;	// G=0x3549c809; 
+ (void)initialize;	// 0x3549cac5
- (id)init;	// 0x3549ca8d
- (id)initWithURL:(id)url;	// 0x3549cbe9
// declared property getter: - (id)URL;	// 0x3549c821
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)keyAreLoaded;	// 0x3549c88d
// declared property getter: - (OpaqueFigAsset *)_figAsset;	// 0x3549c829
// declared property getter: - (OpaqueFigFormatReader *)_formatReader;	// 0x3549c825
// declared property getter: - (BOOL)_isStreaming;	// 0x3549c889
- (id)_mapFigErrorCodeToNSError:(long)nserror;	// 0x3549cae1
// declared property getter: - (OpaqueFigPlaybackItem *)_playbackItem;	// 0x3549c82d
- (void)_serverHasDied;	// 0x3549c895
// declared property getter: - (id)_weakReference;	// 0x3549c809
// declared property getter: - (id)assetCache;	// 0x3549c871
- (id)assetInspector;	// 0x3549c819
- (void)cancelLoading;	// 0x3549c81d
// declared property getter: - (id)chapterGroupInfo;	// 0x3549c86d
- (id)copyWithZone:(NSZone *)zone;	// 0x3549caa1
- (void)dealloc;	// 0x3549cb9d
// declared property getter: - (id)downloadDestinationURL;	// 0x3549c881
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x3549c831
// declared property getter: - (BOOL)hasProtectedContent;	// 0x3549c885
// declared property getter: - (BOOL)isCompatibleWithSavedPhotosAlbum;	// 0x3549c869
// declared property getter: - (BOOL)isComposable;	// 0x3549c865
// declared property getter: - (BOOL)isExportable;	// 0x3549c85d
// declared property getter: - (BOOL)isPlayable;	// 0x3549c859
// declared property getter: - (BOOL)isReadable;	// 0x3549c861
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x3549cb35
- (void)loadValuesAsynchronouslyForKeys:(id)keys keysForCollectionKeys:(id)collectionKeys completionHandler:(id)handler;	// 0x3549cab1
// declared property getter: - (id)lyrics;	// 0x3549c855
// declared property getter: - (unsigned)referenceRestrictions;	// 0x3549c891
// declared property getter: - (id)resolvedURL;	// 0x3549c87d
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;	// 0x3549c875
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;	// 0x3549c879
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x3549cb69
@end

