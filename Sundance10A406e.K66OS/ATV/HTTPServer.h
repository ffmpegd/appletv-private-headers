/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NflxhlsAuthenticationPrimer, NSCondition;

@interface HTTPServer : XXUnknownSuperclass {
	NflxhlsAuthenticationPrimer *primer;	// 4 = 0x4
	BOOL serverRunning;	// 8 = 0x8
	BOOL serverStopping;	// 9 = 0x9
	NSCondition *stopCondition;	// 12 = 0xc
	BOOL serverRunning_;	// 16 = 0x10
}
@property(assign) BOOL serverRunning;	// G=0x4819e1; S=0x4819f9; @synthesize=serverRunning_
+ (void)cleanUp;	// 0x4815a5
+ (id)instance;	// 0x48155d
- (id)init;	// 0x4811b1
- (void)dealloc;	// 0x481215
- (void)debugHTTP:(BOOL)http;	// 0x4815e1
- (void)httpServerMain:(id)main;	// 0x481601
// declared property getter: - (BOOL)serverRunning;	// 0x4819e1
// declared property setter: - (void)setServerRunning:(BOOL)running;	// 0x4819f9
- (void)start;	// 0x481261
- (void)stop;	// 0x481419
@end
