/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, BRTextControl, BRMarqueeTextControl;

@interface GeniusMixClusterDescriptionView : XXUnknownSuperclass {
	BRTextControl *_clusterNameControl;	// 44 = 0x2c
	BRTextControl *_basedOnLabelControl;	// 48 = 0x30
	BRMarqueeTextControl *_basedOnTextControl;	// 52 = 0x34
}
@property(copy, nonatomic) NSString *basedOnText;	// G=0x11221; S=0x11c71; 
@property(copy, nonatomic) NSString *clusterName;	// G=0x11251; S=0x11ce5; 
- (id)init;	// 0x11d59
// declared property getter: - (id)basedOnText;	// 0x11221
// declared property getter: - (id)clusterName;	// 0x11251
- (void)dealloc;	// 0x11281
- (void)layoutSubcontrols;	// 0x11ff9
// declared property setter: - (void)setBasedOnText:(id)text;	// 0x11c71
// declared property setter: - (void)setClusterName:(id)name;	// 0x11ce5
@end

