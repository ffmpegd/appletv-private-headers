/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library


@interface CoreDAVAction : NSObject {
	int _action;	// 4 = 0x4
	id _context;	// 8 = 0x8
}
@property(readonly, assign) int action;	// G=0x35db0f39; @synthesize=_action
@property(readonly, assign) id context;	// G=0x35db0f49; @synthesize=_context
- (id)initWithAction:(int)action context:(id)context;	// 0x35db0e69
// declared property getter: - (int)action;	// 0x35db0f39
// declared property getter: - (id)context;	// 0x35db0f49
- (void)dealloc;	// 0x35db0e1d
- (id)description;	// 0x35db0ecd
@end

