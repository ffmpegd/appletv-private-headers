/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary, AVItem;

@interface AVPlaybackItem : NSObject {
	id _delegate;	// 4 = 0x4
	AVItem *_avItem;	// 8 = 0x8
	OpaqueFigPlaybackItem *_fpItem;	// 12 = 0xc
	XXStruct_pwHToB _currentDuration;	// 16 = 0x10
	CGSize _currentSize;	// 40 = 0x28
	BOOL _currentSizeIsValid;	// 48 = 0x30
	BOOL _isPreparingForInspectionInitialSamples;	// 49 = 0x31
	BOOL _isPreparingForInspectionAccurateDuration;	// 50 = 0x32
	BOOL _isInPlayQueue;	// 51 = 0x33
	double _bookmarkTime;	// 52 = 0x34
	NSDictionary *_streamStateNotificationInfo;	// 60 = 0x3c
	NSDictionary *_lyricsNotificationInfo;	// 64 = 0x40
	NSDictionary *_inspectionNotificationInfo;	// 68 = 0x44
	NSDictionary *_playToEndNotificationInfo;	// 72 = 0x48
}
@property(readonly, retain) AVItem *avItem;	// G=0x36cabe05; converted property
@property(readonly, assign) OpaqueFigPlaybackItem *fpItem;	// G=0x36cac59d; converted property
@property(retain) NSDictionary *inspectionNotificationInfo;	// G=0x36caca29; S=0x36cb01b5; @synthesize=_inspectionNotificationInfo
@property(assign) BOOL isInPlayQueue;	// G=0x36cafd91; S=0x36cafd79; @synthesize=_isInPlayQueue
@property(readonly, assign) BOOL isPreparingForInspection;	// G=0x36caeb55; 
@property(assign) BOOL isPreparingForInspectionAccurateDuration;	// G=0x36cc33f1; S=0x36cc3409; @synthesize=_isPreparingForInspectionAccurateDuration
@property(assign) BOOL isPreparingForInspectionInitialSamples;	// G=0x36cc33c1; S=0x36cc33d9; @synthesize=_isPreparingForInspectionInitialSamples
@property(retain) NSDictionary *lyricsNotificationInfo;	// G=0x36cb07f5; S=0x36cb01a1; @synthesize=_lyricsNotificationInfo
@property(retain) NSDictionary *playToEndNotificationInfo;	// G=0x36cad785; S=0x36cb1511; @synthesize=_playToEndNotificationInfo
@property(retain) NSDictionary *streamStateNotificationInfo;	// G=0x36cb0809; S=0x36cb081d; @synthesize=_streamStateNotificationInfo
+ (id)convertFigTimeDictionaryToTimeIntervalWithKey:(id)key stringURLToNSURLWithKey:(id)key2 inArrayOfDictionaries:(id)dictionaries;	// 0x36cc2ba5
- (id)initWithDelegate:(id)delegate item:(id)item;	// 0x36cab559
- (void)addFPListeners;	// 0x36cae1b9
- (BOOL)addToPlayQueue:(OpaqueFigPlayer *)playQueue afterItem:(OpaqueFigPlaybackItem *)item;	// 0x36cafc41
- (void)applyAttributesFromAVItemToFPItem:(id)fpitem;	// 0x36cae435
- (void)applyBookmarkTime;	// 0x36cae7b9
- (id)attributeForKey:(id)key;	// 0x36cb026d
// converted property getter: - (id)avItem;	// 0x36cabe05
- (void)cacheCurrentDuration;	// 0x36cafa51
- (void)cacheCurrentSize;	// 0x36caf9ed
- (void)dealloc;	// 0x36cb1249
- (void)ensureFPItem;	// 0x36cadb59
- (id)evenlySpacedThumbnailTimesFromStartTime:(double)startTime toEndTime:(double)endTime maxCount:(int)count;	// 0x36cb5cd5
- (id)formatDetailsForTracks;	// 0x36cc2a75
// converted property getter: - (OpaqueFigPlaybackItem *)fpItem;	// 0x36cac59d
- (void)fpItemNotificationInfo:(id)info;	// 0x36caf0f9
- (void)fpItemNotificationName:(id)name userInfo:(id)info;	// 0x36cc3089
- (id)fpNotificationNames;	// 0x36cae29d
// declared property getter: - (id)inspectionNotificationInfo;	// 0x36caca29
// declared property getter: - (BOOL)isInPlayQueue;	// 0x36cafd91
// declared property getter: - (BOOL)isPreparingForInspection;	// 0x36caeb55
// declared property getter: - (BOOL)isPreparingForInspectionAccurateDuration;	// 0x36cc33f1
// declared property getter: - (BOOL)isPreparingForInspectionInitialSamples;	// 0x36cc33c1
- (id)itemAttribute:(id)attribute forKey:(id)key;	// 0x36cb0245
// declared property getter: - (id)lyricsNotificationInfo;	// 0x36cb07f5
- (void)makeReadyForInspection;	// 0x36cae9d1
- (id)nextThumbnailTimesStartingAt:(double)at minimumInterval:(double)interval forwards:(BOOL)forwards maxCount:(int)count;	// 0x36cc30ed
// declared property getter: - (id)playToEndNotificationInfo;	// 0x36cad785
- (id)propertiesNeededForInspection;	// 0x36caeb95
- (void)release;	// 0x36cc29c5
- (void)removeFPListeners;	// 0x36cb1431
- (void)removeFromPlayQueue:(OpaqueFigPlayer *)playQueue;	// 0x36cb0fd9
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x36cc2d65
- (void)setBookmarkTime:(double)time;	// 0x36cabef5
// declared property setter: - (void)setInspectionNotificationInfo:(id)info;	// 0x36cb01b5
// declared property setter: - (void)setIsInPlayQueue:(BOOL)playQueue;	// 0x36cafd79
// declared property setter: - (void)setIsPreparingForInspectionAccurateDuration:(BOOL)inspectionAccurateDuration;	// 0x36cc3409
// declared property setter: - (void)setIsPreparingForInspectionInitialSamples:(BOOL)inspectionInitialSamples;	// 0x36cc33d9
- (void)setItemAttribute:(id)attribute value:(id)value forKey:(id)key error:(id *)error;	// 0x36cc3059
// declared property setter: - (void)setLyricsNotificationInfo:(id)info;	// 0x36cb01a1
// declared property setter: - (void)setPlayToEndNotificationInfo:(id)endNotificationInfo;	// 0x36cb1511
// declared property setter: - (void)setStreamStateNotificationInfo:(id)info;	// 0x36cb081d
- (void)stealControlOfAVItem;	// 0x36cac5ad
// declared property getter: - (id)streamStateNotificationInfo;	// 0x36cb0809
@end

