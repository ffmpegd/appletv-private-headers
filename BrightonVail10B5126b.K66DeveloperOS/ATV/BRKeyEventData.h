/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIEvent, NSDictionary;

__attribute__((visibility("hidden")))
@interface BRKeyEventData : XXUnknownSuperclass {
	unsigned _data;	// 4 = 0x4
	int _action;	// 8 = 0x8
	UIEvent *_event;	// 12 = 0xc
	unsigned _flags;	// 16 = 0x10
	BOOL _shouldRepeat;	// 20 = 0x14
	BOOL _shouldSendKeyHeldDownOnce;	// 21 = 0x15
	int _value;	// 24 = 0x18
}
@property(assign, nonatomic) int action;	// G=0x40a2b5; S=0x40a2c5; @synthesize=_action
@property(assign, nonatomic) unsigned data;	// G=0x40a295; S=0x40a2a5; @synthesize=_data
@property(readonly, assign, nonatomic) NSDictionary *dictionary;	// G=0x409ef9; 
@property(retain, nonatomic) UIEvent *event;	// G=0x40a2d5; S=0x40a2e5; @synthesize=_event
@property(assign, nonatomic) unsigned flags;	// G=0x40a30d; S=0x40a31d; @synthesize=_flags
@property(assign, nonatomic) BOOL shouldRepeat;	// G=0x40a32d; S=0x40a33d; @synthesize=_shouldRepeat
@property(assign, nonatomic) BOOL shouldSendKeyHeldDownOnce;	// G=0x40a34d; S=0x40a35d; @synthesize=_shouldSendKeyHeldDownOnce
@property(assign, nonatomic) int value;	// G=0x40a36d; S=0x40a37d; @synthesize=_value
- (void).cxx_destruct;	// 0x40a38d
// declared property getter: - (int)action;	// 0x40a2b5
// declared property getter: - (unsigned)data;	// 0x40a295
- (id)description;	// 0x40a0b1
// declared property getter: - (id)dictionary;	// 0x409ef9
// declared property getter: - (id)event;	// 0x40a2d5
// declared property getter: - (unsigned)flags;	// 0x40a30d
// declared property setter: - (void)setAction:(int)action;	// 0x40a2c5
// declared property setter: - (void)setData:(unsigned)data;	// 0x40a2a5
// declared property setter: - (void)setEvent:(id)event;	// 0x40a2e5
// declared property setter: - (void)setFlags:(unsigned)flags;	// 0x40a31d
// declared property setter: - (void)setShouldRepeat:(BOOL)repeat;	// 0x40a33d
// declared property setter: - (void)setShouldSendKeyHeldDownOnce:(BOOL)sendKeyHeldDownOnce;	// 0x40a35d
// declared property setter: - (void)setValue:(int)value;	// 0x40a37d
// declared property getter: - (BOOL)shouldRepeat;	// 0x40a32d
// declared property getter: - (BOOL)shouldSendKeyHeldDownOnce;	// 0x40a34d
// declared property getter: - (int)value;	// 0x40a36d
@end
