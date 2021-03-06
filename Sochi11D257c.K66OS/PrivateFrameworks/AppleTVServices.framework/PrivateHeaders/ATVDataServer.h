/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

#import </libobjc.A.h>

@class NSMutableArray, NSMutableDictionary, NSString, NSArray, NSDate;

@interface ATVDataServer : NSObject {
	NSString *_name;	// 4 = 0x4
	unsigned _serverType;	// 8 = 0x8
	id _serverID;	// 12 = 0xc
	int _serverStatus;	// 16 = 0x10
	NSDate *_registeredDate;	// 20 = 0x14
	NSMutableArray *_dataClients;	// 24 = 0x18
	NSMutableDictionary *_metadataDict;	// 28 = 0x1c
}
@property(retain) NSMutableArray *dataClients;	// G=0x3041b74d; S=0x3041b761; @synthesize=_dataClients
@property(retain) NSMutableDictionary *metadataDict;	// G=0x3041b771; S=0x3041b785; @synthesize=_metadataDict
@property(retain, nonatomic) NSString *name;	// G=0x3041b689; S=0x3041b699; @synthesize=_name
@property(readonly, assign, nonatomic) NSArray *registeredDataClients;	// G=0x3041b4fd; 
@property(retain, nonatomic) NSDate *registeredDate;	// G=0x3041b715; S=0x3041b725; @synthesize=_registeredDate
@property(retain, nonatomic) id serverID;	// G=0x3041b6e1; S=0x3041b6f1; @synthesize=_serverID
@property(assign, nonatomic) int serverStatus;	// G=0x3041b705; S=0x3041b1b1; @synthesize=_serverStatus
@property(assign, nonatomic) unsigned serverType;	// G=0x3041b6c1; S=0x3041b6d1; @synthesize=_serverType
+ (id)activeServer;	// 0x3041aef1
+ (id)defaultServer;	// 0x3041ae31
+ (void)deregisterDataServer:(id)server;	// 0x3041a8f5
+ (id)findServerWithServerID:(id)serverID comparator:(id)comparator;	// 0x3041aacd
+ (BOOL)isRegistered:(id)registered;	// 0x3041a9f5
+ (void)registerDataServer:(id)server;	// 0x3041a795
+ (id)serversOfTypes:(unsigned)types;	// 0x3041ad45
+ (void)setActiveServer:(id)server;	// 0x3041af01
- (id)initWithServerName:(id)serverName serverID:(id)anId serverType:(unsigned)type;	// 0x3041af25
- (void).cxx_destruct;	// 0x3041b795
- (id)dataClientOfType:(unsigned)type;	// 0x3041b529
// declared property getter: - (id)dataClients;	// 0x3041b74d
- (void)deregisterDataClient:(id)client;	// 0x3041b491
- (id)description;	// 0x3041b135
- (unsigned)hash;	// 0x3041b0f9
- (BOOL)isEqual:(id)equal;	// 0x3041b045
// declared property getter: - (id)metadataDict;	// 0x3041b771
// declared property getter: - (id)name;	// 0x3041b689
- (id)objectForKey:(id)key;	// 0x3041b669
- (void)registerDataClient:(id)client;	// 0x3041b425
// declared property getter: - (id)registeredDataClients;	// 0x3041b4fd
// declared property getter: - (id)registeredDate;	// 0x3041b715
// declared property getter: - (id)serverID;	// 0x3041b6e1
// declared property getter: - (int)serverStatus;	// 0x3041b705
// declared property getter: - (unsigned)serverType;	// 0x3041b6c1
// declared property setter: - (void)setDataClients:(id)clients;	// 0x3041b761
// declared property setter: - (void)setMetadataDict:(id)dict;	// 0x3041b785
// declared property setter: - (void)setName:(id)name;	// 0x3041b699
- (void)setObject:(id)object forKey:(id)key;	// 0x3041b615
// declared property setter: - (void)setRegisteredDate:(id)date;	// 0x3041b725
// declared property setter: - (void)setServerID:(id)anId;	// 0x3041b6f1
// declared property setter: - (void)setServerStatus:(int)status;	// 0x3041b1b1
// declared property setter: - (void)setServerType:(unsigned)type;	// 0x3041b6d1
@end

