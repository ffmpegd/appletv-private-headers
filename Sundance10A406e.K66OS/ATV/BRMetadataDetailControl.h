/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"
#import "BRMetadataContainer.h"


__attribute__((visibility("hidden")))
@interface BRMetadataDetailControl : BRControl <BRMetadataContainer> {
}
- (id)accessibilityLabel;	// 0x2c5225
- (void)addDetails:(id)details withLabel:(id)label;	// 0x2c4f31
- (void)layoutSubcontrols;	// 0x2c4fe5
- (void)setMetadata:(id)metadata withLabels:(id)labels;	// 0x2c4ee1
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x2c5129
@end
