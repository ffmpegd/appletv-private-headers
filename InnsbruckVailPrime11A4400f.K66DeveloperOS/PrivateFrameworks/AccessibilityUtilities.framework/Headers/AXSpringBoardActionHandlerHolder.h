/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import </libobjc.A.h>

@class NSString;

@interface AXSpringBoardActionHandlerHolder : NSObject {
	id _handler;	// 4 = 0x4
	int _type;	// 8 = 0x8
	NSString *_identifier;	// 12 = 0xc
}
@property(copy, nonatomic) id handler;	// G=0x2fe32845; S=0x2fe32859; @synthesize=_handler
@property(copy, nonatomic) NSString *identifier;	// G=0x2fe32889; S=0x2fe3289d; @synthesize=_identifier
@property(assign, nonatomic) int type;	// G=0x2fe32869; S=0x2fe32879; @synthesize=_type
- (void)dealloc;	// 0x2fe327ed
// declared property getter: - (id)handler;	// 0x2fe32845
// declared property getter: - (id)identifier;	// 0x2fe32889
// declared property setter: - (void)setHandler:(id)handler;	// 0x2fe32859
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x2fe3289d
// declared property setter: - (void)setType:(int)type;	// 0x2fe32879
// declared property getter: - (int)type;	// 0x2fe32869
@end
