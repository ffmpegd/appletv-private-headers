/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMetadataProvider.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor, NSDictionary;

__attribute__((visibility("hidden")))
@interface ATVMusicStoreBaseMetadataProvider : XXUnknownSuperclass <BRMetadataProvider> {
	NSDictionary *_catalogItem;	// 4 = 0x4
	BOOL _useAlternateMetadata;	// 8 = 0x8
	BOOL _shouldPerformUberLayout;	// 9 = 0x9
	BOOL _shouldShowExpandedSummary;	// 10 = 0xa
	UIColor *_titleColor;	// 12 = 0xc
	UIColor *_bodyColor;	// 16 = 0x10
}
@property(retain, nonatomic) UIColor *bodyColor;	// G=0x1c8159; S=0x1c8169; @synthesize=_bodyColor
@property(assign, nonatomic) BOOL shouldPerformUberLayout;	// G=0x1c8119; S=0x1c8129; @synthesize=_shouldPerformUberLayout
@property(assign, nonatomic) BOOL shouldShowExpandedSummary;	// G=0x1c8179; S=0x1c8189; @synthesize=_shouldShowExpandedSummary
@property(retain, nonatomic) UIColor *titleColor;	// G=0x1c8139; S=0x1c8149; @synthesize=_titleColor
@property(assign) BOOL useAlternateMetadata;	// G=0x1c80c1; S=0x1c80d1; converted property
+ (id)providerWithCatalogItem:(id)catalogItem;	// 0x1c7fb9
- (id)initWithCatalogItem:(id)catalogItem;	// 0x1c7ff5
// declared property getter: - (id)bodyColor;	// 0x1c8159
- (id)controlFactory;	// 0x1c80fd
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x1c80e1
- (id)dataAtIndex:(long)index;	// 0x1c8101
- (long)dataCount;	// 0x1c80e5
- (void)dealloc;	// 0x1c8049
- (id)hashForDataAtIndex:(long)index;	// 0x1c8115
- (void)populateMetadataForControl:(id)control;	// 0x1c8111
// declared property setter: - (void)setBodyColor:(id)color;	// 0x1c8169
// declared property setter: - (void)setShouldPerformUberLayout:(BOOL)performUberLayout;	// 0x1c8129
// declared property setter: - (void)setShouldShowExpandedSummary:(BOOL)showExpandedSummary;	// 0x1c8189
// declared property setter: - (void)setTitleColor:(id)color;	// 0x1c8149
// converted property setter: - (void)setUseAlternateMetadata:(BOOL)metadata;	// 0x1c80d1
// declared property getter: - (BOOL)shouldPerformUberLayout;	// 0x1c8119
// declared property getter: - (BOOL)shouldShowExpandedSummary;	// 0x1c8179
// declared property getter: - (id)titleColor;	// 0x1c8139
// converted property getter: - (BOOL)useAlternateMetadata;	// 0x1c80c1
@end
