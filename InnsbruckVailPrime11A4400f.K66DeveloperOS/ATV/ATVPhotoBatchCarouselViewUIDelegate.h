/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVCarouselViewUIDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVPhotoBatchCarouselViewUIDelegate : XXUnknownSuperclass <ATVCarouselViewUIDelegate> {
	NSArray *_positions;	// 4 = 0x4
	float _displacement;	// 8 = 0x8
}
@property(assign, nonatomic) float displacement;	// G=0xc9aed; S=0xc9afd; @synthesize=_displacement
@property(copy, nonatomic) NSArray *positions;	// G=0xc9ac9; S=0xc9add; @synthesize=_positions
- (void).cxx_destruct;	// 0xc9b0d
- (id)carouselView:(id)view configurePerspectiveForContext:(id)context;	// 0xc9335
- (ATVCarouselViewItemsConfig)carouselView:(id)view itemsConfigForContext:(id)context;	// 0xc89f1
- (id)carouselView:(id)view setPositionOfItem:(id)item toPositionAtIndex:(unsigned)index context:(id)context;	// 0xc9339
// declared property getter: - (float)displacement;	// 0xc9aed
// declared property getter: - (id)positions;	// 0xc9ac9
// declared property setter: - (void)setDisplacement:(float)displacement;	// 0xc9afd
// declared property setter: - (void)setPositions:(id)positions;	// 0xc9add
@end
