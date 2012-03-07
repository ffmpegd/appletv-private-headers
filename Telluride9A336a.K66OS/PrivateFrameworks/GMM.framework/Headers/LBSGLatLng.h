/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library


@interface LBSGLatLng : PBCodable {
	int _latE7;	// 4 = 0x4
	int _lngE7;	// 8 = 0x8
}
@property(assign) float lat;	// G=0x3383c8c9; S=0x3383c8a1; converted property
@property(assign, nonatomic) int latE7;	// G=0x3385d9c9; S=0x3385d9d9; @synthesize=_latE7
@property(assign, nonatomic) int lngE7;	// G=0x3385d9e9; S=0x3385d9f9; @synthesize=_lngE7
@property(assign) float lon;	// G=0x3383c921; S=0x3383c8f9; converted property
- (void)dealloc;	// 0x3385d745
- (id)description;	// 0x3385d771
- (id)dictionaryRepresentation;	// 0x3385d7e1
// converted property getter: - (float)lat;	// 0x3383c8c9
// declared property getter: - (int)latE7;	// 0x3385d9c9
// declared property getter: - (int)lngE7;	// 0x3385d9e9
// converted property getter: - (float)lon;	// 0x3383c921
- (BOOL)readFrom:(id)from;	// 0x3385d88d
// converted property setter: - (void)setLat:(float)lat;	// 0x3383c8a1
// declared property setter: - (void)setLatE7:(int)a7;	// 0x3385d9d9
// declared property setter: - (void)setLngE7:(int)a7;	// 0x3385d9f9
// converted property setter: - (void)setLon:(float)lon;	// 0x3383c8f9
- (void)writeTo:(id)to;	// 0x3385d981
@end
