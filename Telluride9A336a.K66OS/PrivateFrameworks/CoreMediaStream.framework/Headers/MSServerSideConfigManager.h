/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "MSServerSideConfigProtocolDelegate.h"

@class NSDictionary, MSServerSideConfigProtocol, NSString, MSMediaStreamDaemon;

@interface MSServerSideConfigManager : NSObject <MSServerSideConfigProtocolDelegate> {
@private
	NSString *_personID;	// 4 = 0x4
	NSDictionary *_config;	// 8 = 0x8
	MSMediaStreamDaemon *_daemon;	// 12 = 0xc
	NSString *_configPath;	// 16 = 0x10
	MSServerSideConfigProtocol *_protocol;	// 20 = 0x14
	int _state;	// 24 = 0x18
}
@property(retain, nonatomic) NSDictionary *config;	// G=0x322bd485; S=0x322bd501; 
@property(assign, nonatomic) MSMediaStreamDaemon *daemon;	// G=0x322bdb61; S=0x322bdb71; @synthesize=_daemon
@property(readonly, assign) NSString *personID;	// G=0x322bdb51; @synthesize=_personID
+ (void)abortAllActivities;	// 0x322bd21d
+ (id)configManagerForPersonID:(id)personID;	// 0x322bd129
+ (id)existingConfigManagerForPersonID:(id)personID;	// 0x322bd201
+ (void)forgetPersonID:(id)anId;	// 0x322bd2c5
+ (int)intValueForParameter:(id)parameter forPersonID:(id)personID defaultValue:(int)value;	// 0x322bd8dd
+ (long long)longLongValueForParameter:(id)parameter forPersonID:(id)personID defaultValue:(long long)value;	// 0x322bda2d
+ (long)longValueForParameter:(id)parameter forPersonID:(id)personID defaultValue:(long)value;	// 0x322bd985
+ (id)objectForKey:(id)key forPersonID:(id)personID defaultValue:(id)value;	// 0x322bdae1
- (id)initWithPersonID:(id)personID baseURL:(id)url;	// 0x322bd315
- (void)abort;	// 0x322bd739
// declared property getter: - (id)config;	// 0x322bd485
// declared property getter: - (id)daemon;	// 0x322bdb61
- (void)dealloc;	// 0x322bd3e9
// declared property getter: - (id)personID;	// 0x322bdb51
- (void)refreshConfiguration;	// 0x322bd6b5
- (void)serverSideConfigProtocol:(id)protocol didFinishWithConfiguration:(id)configuration error:(id)error;	// 0x322bd795
- (void)serverSideConfigProtocol:(id)protocol didReceiveAuthenticationError:(id)error;	// 0x322bd84d
// declared property setter: - (void)setConfig:(id)config;	// 0x322bd501
// declared property setter: - (void)setDaemon:(id)daemon;	// 0x322bdb71
@end

