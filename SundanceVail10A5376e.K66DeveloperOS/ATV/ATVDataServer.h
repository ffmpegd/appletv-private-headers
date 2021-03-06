/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSDate, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ATVDataServer : XXUnknownSuperclass {
	NSString *_name;	// 4 = 0x4
	unsigned long _serverType;	// 8 = 0x8
	id _serverID;	// 12 = 0xc
	int _serverStatus;	// 16 = 0x10
	NSDate *_registeredDate;	// 20 = 0x14
	NSMutableArray *_dataClients;	// 24 = 0x18
	NSMutableDictionary *_metadataDict;	// 28 = 0x1c
}
@property(retain) NSMutableArray *dataClients;	// G=0xc13bd; S=0xc13d1; @synthesize=_dataClients
@property(retain) NSMutableDictionary *metadataDict;	// G=0xc13e1; S=0xc13f5; @synthesize=_metadataDict
@property(retain, nonatomic) NSString *name;	// G=0xc132d; S=0xc133d; @synthesize=_name
@property(retain, nonatomic) NSDate *registeredDate;	// G=0xc139d; S=0xc13ad; @synthesize=_registeredDate
@property(retain, nonatomic) id serverID;	// G=0xc136d; S=0xc137d; @synthesize=_serverID
@property(assign, nonatomic) int serverStatus;	// G=0xc138d; S=0xc0ec1; @synthesize=_serverStatus
@property(assign, nonatomic) unsigned long serverType;	// G=0xc134d; S=0xc135d; @synthesize=_serverType
+ (id)activeServer;	// 0xc097d
+ (id)defaultServer;	// 0xc06b9
+ (void)deregisterDataServer:(id)server;	// 0xc08b1
+ (id)findServerWithServerID:(id)serverID comparator:(id)comparator;	// 0xc099d
+ (void)registerDataServer:(id)server;	// 0xc0795
+ (id)serversOfTypes:(unsigned long)types;	// 0xc0ba9
+ (void)setActiveServer:(id)server;	// 0xc098d
- (id)initWithServerName:(id)serverName serverID:(id)anId serverType:(unsigned long)type;	// 0xc0c79
- (id)allDataClients;	// 0xc12ad
- (id)dataClientOfType:(unsigned long)type;	// 0xc1131
// declared property getter: - (id)dataClients;	// 0xc13bd
- (void)dealloc;	// 0xc0d6d
- (void)deregisterDataClient:(id)client;	// 0xc10ed
- (id)description;	// 0xc0e61
- (unsigned)hash;	// 0xc0e39
- (BOOL)isEqual:(id)equal;	// 0xc0e01
// declared property getter: - (id)metadataDict;	// 0xc13e1
// declared property getter: - (id)name;	// 0xc132d
- (id)objectForKey:(id)key;	// 0xc130d
- (void)registerDataClient:(id)client;	// 0xc10a9
// declared property getter: - (id)registeredDate;	// 0xc139d
// declared property getter: - (id)serverID;	// 0xc136d
// declared property getter: - (int)serverStatus;	// 0xc138d
// declared property getter: - (unsigned long)serverType;	// 0xc134d
// declared property setter: - (void)setDataClients:(id)clients;	// 0xc13d1
// declared property setter: - (void)setMetadataDict:(id)dict;	// 0xc13f5
// declared property setter: - (void)setName:(id)name;	// 0xc133d
- (void)setObject:(id)object forKey:(id)key;	// 0xc12d9
// declared property setter: - (void)setRegisteredDate:(id)date;	// 0xc13ad
// declared property setter: - (void)setServerID:(id)anId;	// 0xc137d
// declared property setter: - (void)setServerStatus:(int)status;	// 0xc0ec1
// declared property setter: - (void)setServerType:(unsigned long)type;	// 0xc135d
@end

