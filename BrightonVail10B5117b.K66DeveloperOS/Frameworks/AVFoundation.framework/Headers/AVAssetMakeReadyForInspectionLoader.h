/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVAssetInspectorLoader.h"
#import "AVFoundation-Structs.h"

@class NSURL, AVAssetCache, AVAssetInspector, NSMutableArray;

@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader {
	AVAssetInspector *_assetInspector;	// 8 = 0x8
	AVAssetCache *_assetCache;	// 12 = 0xc
	BOOL _shouldMatchDataInCacheByURLPathComponentOnly;	// 16 = 0x10
	BOOL _shouldMatchDataInCacheByURLWithoutQueryComponent;	// 17 = 0x11
	NSURL *_downloadDestinationURL;	// 20 = 0x14
	OpaqueFigFormatReader *_formatReader;	// 24 = 0x18
	OpaqueFigSimpleMutex *_loadingMutex;	// 28 = 0x1c
	NSMutableArray *_keysAwaitingCompletion;	// 32 = 0x20
	int _status;	// 36 = 0x24
	long _basicInspectionFailureCode;	// 40 = 0x28
	NSURL *_URL;	// 44 = 0x2c
}
@property(readonly, retain) NSURL *URL;	// G=0x302c0925; converted property
@property(readonly, assign, nonatomic) AVAssetCache *assetCache;	// G=0x302c0935; @synthesize=_assetCache
@property(readonly, retain) AVAssetInspector *assetInspector;	// G=0x302bfd69; converted property
@property(readonly, assign, nonatomic) NSURL *downloadDestinationURL;	// G=0x302c0965; @synthesize=_downloadDestinationURL
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLPathComponentOnly;	// G=0x302c0945; @synthesize=_shouldMatchDataInCacheByURLPathComponentOnly
@property(readonly, assign, nonatomic) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;	// G=0x302c0955; @synthesize=_shouldMatchDataInCacheByURLWithoutQueryComponent
- (id)initWithURL:(id)url;	// 0x302bfbb9
// converted property getter: - (id)URL;	// 0x302c0925
- (OpaqueFigFormatReader *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)figErrorCode;	// 0x302bfe15
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;	// 0x302bfe79
- (id)_dictionaryOfSpecialLoadingMethodsForKeys;	// 0x302c0401
- (OpaqueFigFormatReader *)_formatReader;	// 0x302bfdb1
- (id)_getAndPruneCompletionsWhileMutexLocked;	// 0x302c0025
- (BOOL)_inspectionRequiresAFormatReader;	// 0x302bfe51
- (BOOL)_isStreaming;	// 0x302c0909
- (id)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(id)keys;	// 0x302c03cd
- (id)_loadValuesWhileMutexLockedForKeys:(id)keys;	// 0x302c042d
- (OpaqueFigSimpleMutex *)_loadingMutex;	// 0x302bfe01
- (OpaqueFigPlaybackItem *)_playbackItem;	// 0x302bfe55
- (BOOL)_providesAccurateTiming;	// 0x302bfe11
- (void)_serverHasDied;	// 0x302c090d
- (void)_setStatus:(int)status figErrorCode:(long)code;	// 0x302c02d5
- (int)_status;	// 0x302c01f9
- (id)_statusOfValueForKeyThatIsAlwaysLoaded;	// 0x302bfe59
- (int)_statusOfValueWhileMutexLockedForKey:(id)key error:(id *)error;	// 0x302bfead
- (BOOL)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(id)keys;	// 0x302bff59
- (BOOL)_updateStatusWhileMutexLocked:(int)locked figErrorCode:(long)code;	// 0x302c0209
// declared property getter: - (id)assetCache;	// 0x302c0935
// converted property getter: - (id)assetInspector;	// 0x302bfd69
- (void)cancelLoading;	// 0x302bfd9d
- (id)chapterGroupInfo;	// 0x302c08f1
- (id)copyWithZone:(NSZone *)zone;	// 0x302bfd59
- (void)dealloc;	// 0x302bfc31
// declared property getter: - (id)downloadDestinationURL;	// 0x302c0965
- (XXStruct_pwHToB)duration;	// 0x302c0885
- (void)finalize;	// 0x302bfcfd
- (BOOL)hasProtectedContent;	// 0x302c0905
- (BOOL)isComposable;	// 0x302c0901
- (BOOL)isExportable;	// 0x302c08f9
- (BOOL)isPlayable;	// 0x302c08f5
- (BOOL)isReadable;	// 0x302c08fd
- (void)loadValuesAsynchronouslyForKeys:(id)keys completionHandler:(id)handler;	// 0x302c0671
- (id)lyrics;	// 0x302c08c9
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;	// 0x302c0945
// declared property getter: - (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;	// 0x302c0955
- (int)statusOfValueForKey:(id)key error:(id *)error;	// 0x302c01b1
@end

