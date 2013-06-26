/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

#import "RadioSyncRequest.h"

@class RadioStation, NSString, NSArray;

@interface RadioUpdateStationRequest : RadioSyncRequest {
	RadioStation *_station;	// 64 = 0x40
	NSString *_name;	// 68 = 0x44
	NSString *_stationDescription;	// 72 = 0x48
	NSArray *_seeds;	// 76 = 0x4c
	int _songMixType;	// 80 = 0x50
}
@property(copy, nonatomic) NSString *name;	// G=0x3265d71d; S=0x3265d731; @synthesize=_name
@property(copy, nonatomic) NSArray *seeds;	// G=0x3265d765; S=0x3265d779; @synthesize=_seeds
@property(assign, nonatomic) int songMixType;	// G=0x3265d789; S=0x3265d799; @synthesize=_songMixType
@property(copy, nonatomic) NSString *stationDescription;	// G=0x3265d741; S=0x3265d755; @synthesize=_stationDescription
- (id)init;	// 0x3265d349
- (id)initWithStation:(id)station;	// 0x3265d38d
- (void).cxx_destruct;	// 0x3265d7a9
- (id)_updatedStationDictionary;	// 0x3265d5b9
- (id)changeList;	// 0x3265d435
// declared property getter: - (id)name;	// 0x3265d71d
// declared property getter: - (id)seeds;	// 0x3265d765
// declared property setter: - (void)setName:(id)name;	// 0x3265d731
// declared property setter: - (void)setSeeds:(id)seeds;	// 0x3265d779
// declared property setter: - (void)setSongMixType:(int)type;	// 0x3265d799
// declared property setter: - (void)setStationDescription:(id)description;	// 0x3265d755
// declared property getter: - (int)songMixType;	// 0x3265d789
- (void)startWithCompletionHandler:(id)completionHandler;	// 0x3265d50d
// declared property getter: - (id)stationDescription;	// 0x3265d741
@end
