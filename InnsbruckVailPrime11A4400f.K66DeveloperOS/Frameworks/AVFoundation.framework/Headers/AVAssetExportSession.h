/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVVideoComposition, AVAssetExportSessionInternal, NSError, AVMetadataItemFilter, NSArray, NSString, AVAsset, AVAudioMix, NSURL;
@protocol AVVideoCompositing;

@interface AVAssetExportSession : NSObject {
	AVAssetExportSessionInternal *_exportSession;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) AVAsset *asset;	// G=0x2c2afba1; 
@property(copy, nonatomic) AVAudioMix *audioMix;	// G=0x2c2b1c1d; S=0x2c2b1c3d; 
@property(copy, nonatomic) NSString *audioTimePitchAlgorithm;	// G=0x2c2b1ab5; S=0x2c2b1ad5; 
@property(readonly, assign, nonatomic) id<AVVideoCompositing> customVideoCompositor;	// G=0x2c2b1ff9; 
@property(readonly, assign, nonatomic) NSError *error;	// G=0x2c2b095d; 
@property(readonly, assign, nonatomic) long long estimatedOutputFileLength;	// G=0x2c2b17f5; 
@property(assign, nonatomic) long long fileLengthLimit;	// G=0x2c2b1a11; S=0x2c2b1a35; 
@property(readonly, assign, nonatomic) XXStruct_pwHToB maxDuration;	// G=0x2c2b1745; 
@property(copy, nonatomic) NSArray *metadata;	// G=0x2c2b1879; S=0x2c2b1899; 
@property(retain, nonatomic) AVMetadataItemFilter *metadataItemFilter;	// G=0x2c2b1945; S=0x2c2b1965; 
@property(copy, nonatomic) NSString *outputFileType;	// G=0x2c2b04dd; S=0x2c2b04fd; 
@property(copy, nonatomic) NSURL *outputURL;	// G=0x2c2b06d5; S=0x2c2b06f5; 
@property(readonly, assign, nonatomic) NSString *presetName;	// G=0x2c2afbc1; 
@property(readonly, assign, nonatomic) float progress;	// G=0x2c2b0bdd; 
@property(assign, nonatomic) BOOL shouldOptimizeForNetworkUse;	// G=0x2c2b2025; S=0x2c2b2045; 
@property(readonly, assign, nonatomic) int status;	// G=0x2c2b07dd; 
@property(readonly, assign, nonatomic) NSArray *supportedFileTypes;	// G=0x2c2affa1; 
@property(assign, nonatomic) XXStruct_yD8eWC timeRange;	// G=0x2c2b1635; S=0x2c2b1679; 
@property(copy, nonatomic) AVVideoComposition *videoComposition;	// G=0x2c2b1d41; S=0x2c2b1d61; 
+ (id)_asynchronousDispatchQueue;	// 0x2c2b2761
+ (id)_audioOnlyPresets;	// 0x2c2b20c1
+ (id)_audioVideoPresets;	// 0x2c2b2159
+ (id)_bitRateTableForPreset:(id)preset;	// 0x2c2b3245
+ (BOOL)_canWriteMediaOfAsset:(id)asset toFileType:(id)fileType;	// 0x2c2af0d9
+ (BOOL)_disableExportCompatibilityCheck;	// 0x2c2b3129
+ (BOOL)_disablePassthrough;	// 0x2c2b5ded
+ (long long)_estimatedOutputFileLengthForPreset:(id)preset duration:(XXStruct_pwHToB)duration properties:(id)properties;	// 0x2c2b4629
+ (BOOL)_failsAudioPassthroughRestrictions:(id)restrictions outputFileType:(id)type;	// 0x2c2b2b05
+ (id)_figRemakerNotificationNames;	// 0x2c2b415d
+ (int)_getPassthroughExportPolicyForAssetTrack:(id)assetTrack fileType:(id)type asChapterTrack:(BOOL)track;	// 0x2c2afbe1
+ (BOOL)_isExportPreset:(id)preset compatibleWithAsset:(id)asset outputFileType:(id)type;	// 0x2c2b3161
+ (BOOL)_isNonPassthroughExportPreset:(id)preset compatibleWithAsset:(id)asset outputFileType:(id)type;	// 0x2c2b30cd
+ (BOOL)_isNonPassthroughExportPreset:(id)preset compatibleWithAssetContainingPlayableAudio:(BOOL)assetContainingPlayableAudio playableVideo:(BOOL)video outputFileType:(id)type;	// 0x2c2b2f1d
+ (BOOL)_isPassthroughExportPresetCompatibleWithAsset:(id)asset outputFileType:(id)type;	// 0x2c2b2c25
+ (BOOL)_isPassthroughExportSupportedForAudioFormatDescription:(opaqueCMFormatDescription *)audioFormatDescription forFileType:(CFStringRef)fileType asChapterTrack:(BOOL)track usingModifiedFormatDescription:(const opaqueCMFormatDescription **)description;	// 0x2c2b298d
+ (BOOL)_isPassthroughExportSupportedForFormatDescription:(opaqueCMFormatDescription *)formatDescription forFileType:(CFStringRef)fileType asChapterTrack:(BOOL)track;	// 0x2c2b2aad
+ (XXStruct_pwHToB)_maximumDurationForPreset:(id)preset fileSizeBytesLimit:(long long)limit properties:(id)properties;	// 0x2c2b4205
+ (id)_mediaTypesToFailPassthroughExport;	// 0x2c2b2855
+ (id)_mediaTypesToStripOnPassthroughExport;	// 0x2c2b27bd
+ (id)_settingForPreset:(id)preset;	// 0x2c2b3201
+ (id)_utTypesForAudioOnly;	// 0x2c2b2679
+ (id)_utTypesForDefaultPassthroughPreset;	// 0x2c2b2539
+ (id)_utTypesForPresets;	// 0x2c2b2231
+ (id)_videoCompressionPropertiesForVideoSetting:(id)videoSetting;	// 0x2c2b8769
+ (id)allExportPresets;	// 0x2c2aeda1
+ (void)determineCompatibilityOfExportPreset:(id)exportPreset withAsset:(id)asset outputFileType:(id)type completionHandler:(id)handler;	// 0x2c2af1f5
+ (long long)estimatedOutputFileLengthForPreset:(id)preset duration:(XXStruct_pwHToB)duration properties:(id)properties;	// 0x2c2af449
+ (id)exportPresetsCompatibleWithAsset:(id)asset;	// 0x2c2aefa1
+ (id)exportSessionWithAsset:(id)asset presetName:(id)name;	// 0x2c2af37d
+ (id)keyPathsForValuesAffectingEstimatedOutputFileLength;	// 0x2c2b17c5
+ (XXStruct_pwHToB)maximumDurationForPreset:(id)preset properties:(id)properties;	// 0x2c2af3c9
- (id)init;	// 0x2c2af495
- (id)initWithAsset:(id)asset presetName:(id)name;	// 0x2c2af4a9
- (id)_actualOutputFileType;	// 0x2c2b8be5
- (id)_actualPresetName;	// 0x2c2b4b41
- (id)_actualSettingForPreset:(id)preset;	// 0x2c2b39d1
- (id)_actualSettingForPresetAppleM4VAppleTV:(id)presetAppleM4VAppleTV;	// 0x2c2b39cd
- (id)_addAudioPassthroughTrack:(id)track asChapterTrack:(BOOL)track2 toFigRemaker:(OpaqueFigRemaker *)figRemaker returningTrackID:(int *)anId;	// 0x2c2b7a31
- (void)_addListeners;	// 0x2c2b5249
- (id)_addTracksAndPropertiesToFigRemakerForPassthroughExport:(OpaqueFigRemaker *)passthroughExport;	// 0x2c2b7bf9
- (id)_audioProcessingOptions;	// 0x2c2b7929
- (int)_averageBitRateForSourceAndPreset:(id)sourceAndPreset targetFrameRate:(float)rate;	// 0x2c2b36b1
- (id)_bitRateTierForVideoSetting:(id)videoSetting withPreset:(id)preset;	// 0x2c2b346d
- (BOOL)_canPassThroughAudio:(id)audio checkEnabled:(BOOL)enabled checkProtected:(BOOL)aProtected;	// 0x2c2b5e29
- (BOOL)_canPassThroughVideo:(id)video checkEnabled:(BOOL)enabled checkAll:(BOOL)all checkProtected:(BOOL)aProtected;	// 0x2c2b6bc1
- (id)_createFigRemaker:(OpaqueFigRemaker **)remaker;	// 0x2c2b8e71
- (void)_createFormatWriterOptions:(id *)options forFileFormat:(id)fileFormat;	// 0x2c2b8cf1
- (void)_createRemakerAndBeginExport;	// 0x2c2b11d5
- (void)_createRemakerOptions:(id *)options forFileFormat:(id)fileFormat;	// 0x2c2b8d29
- (id)_determineCompatibleFileTypes;	// 0x2c2b0011
- (CGSize)_getSourceDimension;	// 0x2c2b53a1
- (float)_getSourceVideoFrameRate;	// 0x2c2b5759
- (int)_getTrackCountOfType:(id)type checkEnabled:(BOOL)enabled;	// 0x2c2b5945
- (CGSize)_getUntransformedSourceDimension;	// 0x2c2b55d9
- (void)_handleFigRemakerNotification:(id)notification payload:(id)payload;	// 0x2c2b4885
- (void)_handleFigRemakerNotificationAsync:(id)async payload:(id)payload;	// 0x2c2b4a69
- (BOOL)_hasProtectedNonAudioVideoTracks;	// 0x2c2b5a75
- (BOOL)_isAudioMixdownRequired:(CFStringRef)required error:(id *)error;	// 0x2c2b78c9
- (void)_removeListeners;	// 0x2c2b5091
- (id)_retrieveChannelSpecificAudioSettingForAudioTrack:(id)audioTrack fromAudioSetting:(id)audioSetting;	// 0x2c2b68dd
- (id)_settingForFigRemaker;	// 0x2c2b6a4d
- (BOOL)_totalSizeOfTracksIsWithinFileLengthLimit:(id)tracksIsWithinFileLengthLimit forSetting:(id)setting;	// 0x2c2b5c51
- (void)_transitionToStatus:(int)status error:(id)error;	// 0x2c2b4b75
- (void)_updateProgress;	// 0x2c2b0b35
- (void)_validateOutputFileTypeForExport;	// 0x2c2b0f89
- (BOOL)_validateSettablePropertiesReturningError:(id *)error;	// 0x2c2b0d7d
// declared property getter: - (id)asset;	// 0x2c2afba1
// declared property getter: - (id)audioMix;	// 0x2c2b1c1d
// declared property getter: - (id)audioTimePitchAlgorithm;	// 0x2c2b1ab5
- (void)cancelExport;	// 0x2c2b1621
// declared property getter: - (id)customVideoCompositor;	// 0x2c2b1ff9
- (void)dealloc;	// 0x2c2af795
- (id)description;	// 0x2c2afafd
- (void)determineCompatibleFileTypesWithCompletionHandler:(id)completionHandler;	// 0x2c2b03b1
// declared property getter: - (id)error;	// 0x2c2b095d
// declared property getter: - (long long)estimatedOutputFileLength;	// 0x2c2b17f5
- (void)exportAsynchronouslyWithCompletionHandler:(id)completionHandler;	// 0x2c2b1055
// declared property getter: - (long long)fileLengthLimit;	// 0x2c2b1a11
- (void)finalize;	// 0x2c2afa01
// declared property getter: - (XXStruct_pwHToB)maxDuration;	// 0x2c2b1745
// declared property getter: - (id)metadata;	// 0x2c2b1879
// declared property getter: - (id)metadataItemFilter;	// 0x2c2b1945
// declared property getter: - (id)outputFileType;	// 0x2c2b04dd
// declared property getter: - (id)outputURL;	// 0x2c2b06d5
// declared property getter: - (id)presetName;	// 0x2c2afbc1
// declared property getter: - (float)progress;	// 0x2c2b0bdd
// declared property setter: - (void)setAudioMix:(id)mix;	// 0x2c2b1c3d
// declared property setter: - (void)setAudioTimePitchAlgorithm:(id)algorithm;	// 0x2c2b1ad5
// declared property setter: - (void)setFileLengthLimit:(long long)limit;	// 0x2c2b1a35
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x2c2b1899
// declared property setter: - (void)setMetadataItemFilter:(id)filter;	// 0x2c2b1965
// declared property setter: - (void)setOutputFileType:(id)type;	// 0x2c2b04fd
// declared property setter: - (void)setOutputURL:(id)url;	// 0x2c2b06f5
// declared property setter: - (void)setShouldOptimizeForNetworkUse:(BOOL)optimizeForNetworkUse;	// 0x2c2b2045
// declared property setter: - (void)setTimeRange:(XXStruct_yD8eWC)range;	// 0x2c2b1679
// declared property setter: - (void)setVideoComposition:(id)composition;	// 0x2c2b1d61
// declared property getter: - (BOOL)shouldOptimizeForNetworkUse;	// 0x2c2b2025
// declared property getter: - (int)status;	// 0x2c2b07dd
// declared property getter: - (id)supportedFileTypes;	// 0x2c2affa1
// declared property getter: - (XXStruct_yD8eWC)timeRange;	// 0x2c2b1635
// declared property getter: - (id)videoComposition;	// 0x2c2b1d41
@end

