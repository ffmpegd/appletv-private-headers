/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class LBSGLatLng;

@interface LBSGRectangle : PBCodable {
	LBSGLatLng *_lowerLeft;	// 4 = 0x4
	LBSGLatLng *_upperRight;	// 8 = 0x8
}
@property(retain, nonatomic) LBSGLatLng *lowerLeft;	// G=0x33860edd; S=0x33860eed; @synthesize=_lowerLeft
@property(retain, nonatomic) LBSGLatLng *upperRight;	// G=0x33860f11; S=0x33860f21; @synthesize=_upperRight
- (void)dealloc;	// 0x33860a79
- (id)description;	// 0x33860ad1
- (id)dictionaryRepresentation;	// 0x33860b41
// declared property getter: - (id)lowerLeft;	// 0x33860edd
- (BOOL)readFrom:(id)from;	// 0x33860bc1
// declared property setter: - (void)setLowerLeft:(id)left;	// 0x33860eed
// declared property setter: - (void)setUpperRight:(id)right;	// 0x33860f21
// declared property getter: - (id)upperRight;	// 0x33860f11
- (void)writeTo:(id)to;	// 0x33860dcd
@end

