/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import "ATVDataItem.h"

@class NSDictionary, NSDate, ATVDataType, ATVBookmark;

@interface ATVITunesStoreDataItem : ATVDataItem {
	unsigned _1080pResolutionIndex;	// 20 = 0x14
	unsigned _720pResolutionIndex;	// 24 = 0x18
	unsigned _480pResolutionIndex;	// 28 = 0x1c
	ATVBookmark *_bookmark;	// 32 = 0x20
	NSDictionary *_storeDict;	// 36 = 0x24
	ATVDataType *_mediaType;	// 40 = 0x28
	NSDate *_expirationDate;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) ATVBookmark *bookmark;	// G=0x30081b01; 
@property(retain, nonatomic) NSDate *expirationDate;	// G=0x30083861; S=0x30083871; @synthesize=_expirationDate
@property(retain, nonatomic) ATVDataType *mediaType;	// G=0x30083829; S=0x30083839; @synthesize=_mediaType
@property(retain, nonatomic) NSDictionary *storeDict;	// G=0x300837f1; S=0x30083801; @synthesize=_storeDict
+ (id)storeFlavorKeyForATVDataProperty:(id)atvdataProperty;	// 0x3008316d
+ (id)storeKeyForATVDataProperty:(id)atvdataProperty;	// 0x30083311
- (id)initWithDataClient:(id)dataClient storeDict:(id)dict;	// 0x300814e1
- (void).cxx_destruct;	// 0x30083899
- (unsigned)_bestResolutionIndex;	// 0x30082f71
- (void)_bookmarkServiceUpdatedNotification:(id)notification;	// 0x30081a1d
- (id)_dateFromString:(id)string;	// 0x300830cd
- (id)_flavoredDict;	// 0x30082ff9
// declared property getter: - (id)bookmark;	// 0x30081b01
- (void)cleanupAfterPlaybackOrDownload;	// 0x30082ead
- (id)concreteValueForProperty:(id)property;	// 0x30081c99
- (void)dealloc;	// 0x300819b1
// declared property getter: - (id)expirationDate;	// 0x30083861
- (BOOL)hasTrait:(id)trait;	// 0x30082785
- (unsigned)hash;	// 0x30081ab9
- (BOOL)isEqual:(id)equal;	// 0x30081a35
// declared property getter: - (id)mediaType;	// 0x30083829
- (id)playbackMetadataForKey:(id)key;	// 0x3008295d
- (void)prepareForPlaybackWithCompletion:(id)completion;	// 0x30082a75
// declared property setter: - (void)setExpirationDate:(id)date;	// 0x30083871
// declared property setter: - (void)setMediaType:(id)type;	// 0x30083839
// declared property setter: - (void)setStoreDict:(id)dict;	// 0x30083801
// declared property getter: - (id)storeDict;	// 0x300837f1
- (void)updateBookmark:(id)bookmark;	// 0x30081c25
@end
