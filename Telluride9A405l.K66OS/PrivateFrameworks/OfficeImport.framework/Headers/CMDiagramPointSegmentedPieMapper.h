/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMDiagramPointMapper.h"
#import "OfficeImport-Structs.h"


__attribute__((visibility("hidden")))
@interface CMDiagramPointSegmentedPieMapper : CMDiagramPointMapper {
@private
	float mStartAngle;	// 24 = 0x18
	float mStopAngle;	// 28 = 0x1c
	BOOL mDrawArrows;	// 32 = 0x20
	unsigned mSegmentIndex;	// 36 = 0x24
	unsigned mSegmentCount;	// 40 = 0x28
}
- (id)_arrowFillWithState:(id)state;	// 0x30ed58c1
- (void)mapAt:(id)at withState:(id)state;	// 0x30ed5a29
- (void)setDrawArrows:(BOOL)arrows;	// 0x30ed587d
- (void)setSegmentCount:(unsigned)count;	// 0x30ed589d
- (void)setSegmentIndex:(unsigned)index;	// 0x30ed588d
- (void)setStartAngle:(float)angle;	// 0x30ed585d
- (void)setStopAngle:(float)angle;	// 0x30ed586d
- (id)transformPresentationName;	// 0x30ed58ad
@end

