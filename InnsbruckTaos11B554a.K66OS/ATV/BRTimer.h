/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface BRTimer : XXUnknownSuperclass {
	BOOL _cancel;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	double _interval;	// 12 = 0xc
}
@property(assign) BOOL cancel;	// G=0x45e8b9; S=0x45e8d1; @synthesize=_cancel
+ (id)createTimerWithName:(id)name;	// 0x45e7a9
- (id)initWithName:(id)name;	// 0x45e7ad
// declared property getter: - (BOOL)cancel;	// 0x45e8b9
- (void)dealloc;	// 0x45e819
- (void)reset;	// 0x45e899
// declared property setter: - (void)setCancel:(BOOL)cancel;	// 0x45e8d1
@end

