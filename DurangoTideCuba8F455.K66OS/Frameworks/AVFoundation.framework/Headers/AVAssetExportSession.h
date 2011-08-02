/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVVideoComposition, NSArray, NSString, AVAssetExportSessionInternal, NSError, NSURL, AVAudioMix;

@interface AVAssetExportSession : NSObject {
@private
	AVAssetExportSessionInternal *_exportSession;	// 4 = 0x4
}
@property(copy, nonatomic) AVAudioMix *audioMix;	// G=0x3259c00d; S=0x3259cc49; 
@property(readonly, assign, nonatomic) NSError *error;	// G=0x3259d6ed; 
@property(assign, nonatomic) long long fileLengthLimit;	// G=0x3259bff1; S=0x3259cced; 
@property(readonly, assign, nonatomic) XXStruct_pwHToB maxDuration;	// G=0x3259deed; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x3259bfd5; S=0x3259cd65; 
@property(copy, nonatomic) NSString *outputFileType;	// G=0x3259bf51; S=0x3259d261; 
@property(copy, nonatomic) NSURL *outputURL;	// G=0x3259bf6d; S=0x3259cea1; 
@property(readonly, assign, nonatomic) NSString *presetName;	// G=0x3259bf35; 
@property(readonly, assign, nonatomic) float progress;	// G=0x3259d5d9; 
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;	// G=0x3259c045; S=0x3259cbd9; 
@property(readonly, assign, nonatomic) int status;	// G=0x3259d811; 
@property(readonly, assign, nonatomic) NSArray *supportedFileTypes;	// G=0x3259c509; 
@property(assign, nonatomic) XXStruct_yD8eWC timeRange;	// G=0x3259bfad; S=0x3259ce09; 
@property(copy, nonatomic) AVVideoComposition *videoComposition;	// G=0x3259c029; S=0x3259e1fd; 
+ (id)_figRemakerNotificationNames;	// 0x3259c0a5
+ (id)_settingForPreset:(id)preset;	// 0x3259e3b1
+ (id)_utTypesForPresets;	// 0x3259f239
+ (id)allExportPresets;	// 0x3259e419
+ (id)exportPresetsCompatibleWithAsset:(id)asset;	// 0x3259d3fd
+ (id)exportSessionWithAsset:(id)asset presetName:(id)name;	// 0x3259c581
- (id)init;	// 0x3259c569
- (id)initWithAsset:(id)asset presetName:(id)name;	// 0x3259c711
- (id)_actualPresetName;	// 0x3259c061
- (void)_addListeners;	// 0x3259e6e1
- (BOOL)_canPassThroughAudio:(id)audio checkEnabled:(BOOL)enabled checkProtected:(BOOL)aProtected;	// 0x3259ecc5
- (BOOL)_canPassThroughVideo:(id)video checkEnabled:(BOOL)enabled checkAll:(BOOL)all checkProtected:(BOOL)aProtected;	// 0x3259f25d
- (OpaqueFigRemaker *)_createFigRemaker;	// 0x3259fa21
- (CGSize)_getSourceDimension;	// 0x3259ea81
- (int)_getTrackCountOfType:(id)type checkEnabled:(BOOL)enabled;	// 0x3259d14d
- (void)_handleFigRemakerNotification:(id)notification;	// 0x3259e58d
- (void)_handleFigRemakerNotificationAsync:(id)async;	// 0x3259e685
- (BOOL)_hasProtectedNonAudioVideoTracks;	// 0x3259eb4d
- (void)_removeListeners;	// 0x3259e829
- (id)_settingForFigRemaker;	// 0x3259e96d
- (BOOL)_totalSizeOfTracksIsWithinFileLengthLimit:(id)tracksIsWithinFileLengthLimit forSetting:(id)setting;	// 0x3259d039
- (void)_transitionToStatus:(int)status error:(id)error;	// 0x3259daad
- (void)_updateProgress;	// 0x3259d9f1
// declared property getter: - (id)audioMix;	// 0x3259c00d
- (void)cancelExport;	// 0x3259c439
- (void)dealloc;	// 0x3259ca0d
- (id)description;	// 0x3259c675
// declared property getter: - (id)error;	// 0x3259d6ed
- (void)exportAsynchronouslyWithCompletionHandler:(id)completionHandler;	// 0x3259dd49
// declared property getter: - (long long)fileLengthLimit;	// 0x3259bff1
- (void)finalize;	// 0x325a1421
// declared property getter: - (XXStruct_pwHToB)maxDuration;	// 0x3259deed
// declared property getter: - (id)metadata;	// 0x3259bfd5
// declared property getter: - (id)outputFileType;	// 0x3259bf51
// declared property getter: - (id)outputURL;	// 0x3259bf6d
// declared property getter: - (id)presetName;	// 0x3259bf35
// declared property getter: - (float)progress;	// 0x3259d5d9
- (void)release;	// 0x3259c5c5
- (id)retain;	// 0x3259c61d
// declared property setter: - (void)setAudioMix:(id)mix;	// 0x3259cc49
// declared property setter: - (void)setFileLengthLimit:(long long)limit;	// 0x3259cced
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x3259cd65
// declared property setter: - (void)setOutputFileType:(id)type;	// 0x3259d261
// declared property setter: - (void)setOutputURL:(id)url;	// 0x3259cea1
// declared property setter: - (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x3259cbd9
// declared property setter: - (void)setTimeRange:(XXStruct_yD8eWC)range;	// 0x3259ce09
// declared property setter: - (void)setVideoComposition:(id)composition;	// 0x3259e1fd
// declared property getter: - (BOOL)shouldOptimizeForNetworkUse;	// 0x3259c045
// declared property getter: - (int)status;	// 0x3259d811
// declared property getter: - (id)supportedFileTypes;	// 0x3259c509
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x3259bfad
// declared property getter: - (id)videoComposition;	// 0x3259c029
@end
