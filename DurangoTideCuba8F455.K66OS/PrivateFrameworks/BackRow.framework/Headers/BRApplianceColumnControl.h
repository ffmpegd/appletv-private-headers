/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@protocol BRAppliance;

__attribute__((visibility("hidden")))
@interface BRApplianceColumnControl : BRControl {
@private
	id<BRAppliance> _appliance;	// 44 = 0x2c
	BRControl *_applianceLabel;	// 48 = 0x30
	float _headerWidth;	// 52 = 0x34
	float _maxCategoryWidth;	// 56 = 0x38
}
@property(readonly, assign) float headerWidth;	// G=0x32fec875; converted property
@property(assign) float maxCategoryWidth;	// G=0x32fe954d; S=0x32fe953d; converted property
- (id)initWithAppliance:(id)appliance;	// 0x32fe9791
- (id)accessibilityLabel;	// 0x32fe9591
- (void)dealloc;	// 0x32fe9735
// converted property getter: - (float)headerWidth;	// 0x32fec875
- (void)layoutSubcontrols;	// 0x32fecbb1
// converted property getter: - (float)maxCategoryWidth;	// 0x32fe954d
- (void)reload;	// 0x32fe95b1
- (void)resetMaxCategoryWidth;	// 0x32fe957d
- (void)resetMetrics;	// 0x32fe955d
// converted property setter: - (void)setMaxCategoryWidth:(float)width;	// 0x32fe953d
@end
