/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRControl.h"
#import "BRMetadataContainer.h"


__attribute__((visibility("hidden")))
@interface BRMetadataDetailChunkControl : BRControl <BRMetadataContainer> {
	BOOL _leftAlignLabel;	// 84 = 0x54
}
@property(assign, nonatomic) BOOL leftAlignLabel;	// G=0x2d7dd9; S=0x2d7de9; @synthesize=_leftAlignLabel
- (id)accessibilityLabel;	// 0x2d7dbd
- (void)dealloc;	// 0x2d78c9
- (void)layoutSubcontrols;	// 0x2d7a11
// declared property getter: - (BOOL)leftAlignLabel;	// 0x2d7dd9
// declared property setter: - (void)setLeftAlignLabel:(BOOL)label;	// 0x2d7de9
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x2d78f5
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2d7c81
@end

