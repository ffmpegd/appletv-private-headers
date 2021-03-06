/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FactoryDiags.framework/FactoryDiags
 */

#import <NSObject.h> // Unknown library

@class NSXPCConnection;

@interface OSDDisplay : NSObject {
	NSXPCConnection *connection;	// 4 = 0x4
	double _timeout;	// 8 = 0x8
}
@property(assign, nonatomic) double timeout;	// G=0x321d8ec5; S=0x321d8edd; @synthesize=_timeout
+ (void)initialize;	// 0x321d8519
+ (id)sharedInstance;	// 0x321d8571
- (id)init;	// 0x321d8581
- (bool)continueTesting;	// 0x321d8d09
- (id)currentTest;	// 0x321d8dad
- (id)nextTest;	// 0x321d8e39
- (id)sendInfo:(id)info;	// 0x321d8751
// declared property setter: - (void)setTimeout:(double)timeout;	// 0x321d8edd
- (bool)showPattern:(id)pattern;	// 0x321d8ac1
- (bool)showRed:(unsigned)red green:(unsigned)green blue:(unsigned)blue;	// 0x321d8b45
- (void)startXPCConnection;	// 0x321d85cd
- (bool)temperatureReady;	// 0x321d8c65
// declared property getter: - (double)timeout;	// 0x321d8ec5
@end

