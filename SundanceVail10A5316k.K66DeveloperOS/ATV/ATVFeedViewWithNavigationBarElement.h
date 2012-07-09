/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedViewWithNavigationBarElement : ATVFeedRootElement {
	int _currentIndex;	// 8 = 0x8
	NSArray *_navigationItems;	// 12 = 0xc
	NSString *_onNavigate;	// 16 = 0x10
}
@property(assign, nonatomic) int currentIndex;	// G=0x379d01; S=0x379d11; @synthesize=_currentIndex
@property(retain, nonatomic) NSArray *navigationItems;	// G=0x379d21; S=0x379d31; @synthesize=_navigationItems
@property(copy, nonatomic) NSString *onNavigate;	// G=0x379d59; S=0x379d6d; @synthesize=_onNavigate
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x379a7d
- (void).cxx_destruct;	// 0x379d7d
// declared property getter: - (int)currentIndex;	// 0x379d01
// declared property getter: - (id)navigationItems;	// 0x379d21
// declared property getter: - (id)onNavigate;	// 0x379d59
// declared property setter: - (void)setCurrentIndex:(int)index;	// 0x379d11
// declared property setter: - (void)setNavigationItems:(id)items;	// 0x379d31
// declared property setter: - (void)setOnNavigate:(id)navigate;	// 0x379d6d
@end
