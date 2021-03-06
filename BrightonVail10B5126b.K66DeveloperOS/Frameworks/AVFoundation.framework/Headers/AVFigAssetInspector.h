/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetInspector.h"

@class NSURL, NSData, NSArray;

@interface AVFigAssetInspector : AVAssetInspector {
	OpaqueFigAsset *_figAsset;	// 4 = 0x4
	OpaqueFigFormatReader *_formatReader;	// 8 = 0x8
	BOOL didCheckForSaveRestriction;	// 12 = 0xc
	BOOL hasSaveRestriction;	// 13 = 0xd
}
@property(readonly, assign, nonatomic) NSData *SHA1Digest;	// G=0x302b8275; 
@property(readonly, assign, nonatomic) NSURL *URL;	// G=0x302b81cd; 
@property(readonly, assign, nonatomic) NSArray *chapterGroupInfo;	// G=0x302b81ad; 
@property(readonly, assign, nonatomic) unsigned long long downloadToken;	// G=0x302b820d; 
@property(readonly, assign, nonatomic, getter=_figAsset) OpaqueFigAsset *figAsset;	// G=0x302b7805; 
@property(readonly, assign, nonatomic) BOOL hasProtectedContent;	// G=0x302b824d; 
@property(readonly, assign, nonatomic) NSURL *resolvedURL;	// G=0x302b81ed; 
- (id)initWithFigAsset:(OpaqueFigAsset *)figAsset;	// 0x302b762d
// declared property getter: - (id)SHA1Digest;	// 0x302b8275
// declared property getter: - (id)URL;	// 0x302b81cd
// declared property getter: - (OpaqueFigAsset *)_figAsset;	// 0x302b7805
- (OpaqueFigFormatReader *)_formatReader;	// 0x302b7815
- (BOOL)_hasQTSaveRestriction;	// 0x302b7fbd
- (void *)_valueAsCFTypeForProperty:(CFStringRef)property;	// 0x302b7881
- (id)alternateTrackGroups;	// 0x302b7aad
- (id)availableMetadataFormats;	// 0x302b7db1
// declared property getter: - (id)chapterGroupInfo;	// 0x302b81ad
- (id)commonMetadata;	// 0x302b7c71
- (id)creationDate;	// 0x302b7b0d
- (void)dealloc;	// 0x302b7691
// declared property getter: - (unsigned long long)downloadToken;	// 0x302b820d
- (XXStruct_pwHToB)duration;	// 0x302b78d9
- (void)finalize;	// 0x302b76ed
// declared property getter: - (BOOL)hasProtectedContent;	// 0x302b824d
- (unsigned)hash;	// 0x302b77bd
- (BOOL)isComposable;	// 0x302b8169
- (BOOL)isEqual:(id)equal;	// 0x302b7749
- (BOOL)isExportable;	// 0x302b80e1
- (BOOL)isReadable;	// 0x302b8125
- (id)lyrics;	// 0x302b7c51
- (id)mediaSelectionGroups;	// 0x302b7aed
- (id)metadataForFormat:(id)format;	// 0x302b7dd1
- (CGSize)naturalSize;	// 0x302b79b1
- (int)naturalTimeScale;	// 0x302b79dd
- (float)preferredRate;	// 0x302b7911
- (float)preferredSoundCheckVolumeNormalization;	// 0x302b7959
- (CGAffineTransform)preferredTransform;	// 0x302b7979
- (float)preferredVolume;	// 0x302b7935
- (BOOL)providesPreciseDurationAndTiming;	// 0x302b7a4d
// declared property getter: - (id)resolvedURL;	// 0x302b81ed
- (long)trackCount;	// 0x302b7a75
- (id)trackReferences;	// 0x302b7acd
@end

