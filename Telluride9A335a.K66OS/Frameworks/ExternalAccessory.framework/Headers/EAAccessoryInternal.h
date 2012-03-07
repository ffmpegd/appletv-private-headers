/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/ExternalAccessory.framework/ExternalAccessory
 */

#import <NSObject.h> // Unknown library
#import "ExternalAccessory-Structs.h"

@class NSMutableArray, NSArray, NSString, NSDictionary;
@protocol EAAccessoryDelegate;

@interface EAAccessoryInternal : NSObject {
@private
	BOOL _connected;	// 4 = 0x4
	unsigned _connectionID;	// 8 = 0x8
	NSString *_name;	// 12 = 0xc
	NSString *_manufacturer;	// 16 = 0x10
	NSString *_modelNumber;	// 20 = 0x14
	NSString *_serialNumber;	// 24 = 0x18
	NSString *_firmwareRevision;	// 28 = 0x1c
	NSString *_hardwareRevision;	// 32 = 0x20
	NSString *_preferredApp;	// 36 = 0x24
	int _classType;	// 40 = 0x28
	NSDictionary *_audioPorts;	// 44 = 0x2c
	unsigned _capabilities;	// 48 = 0x30
	NSMutableArray *_sessionsList;	// 52 = 0x34
	NSArray *_eqNames;	// 56 = 0x38
	unsigned _eqItems;	// 60 = 0x3c
	int _iPodOutOptionsMask;	// 64 = 0x40
	CFAccessoryRef _cfAccessory;	// 68 = 0x44
	/*function-pointer*/ void *_cfAccessoryPortPropertyCallback;	// 72 = 0x48
	void *_cfAccessoryPortPropertyContext;	// 76 = 0x4c
	NSDictionary *_protocols;	// 80 = 0x50
	id<EAAccessoryDelegate> _delegate;	// 84 = 0x54
	unsigned _eqIndex;	// 88 = 0x58
}
@property(retain, nonatomic) NSDictionary *audioPorts;	// G=0x311b8545; S=0x311b8555; @synthesize=_audioPorts
@property(assign, nonatomic) unsigned capabilities;	// G=0x311b8579; S=0x311b8589; @synthesize=_capabilities
@property(assign, nonatomic) CFAccessoryRef cfAccessory;	// G=0x311b860d; S=0x311b861d; @synthesize=_cfAccessory
@property(assign, nonatomic) /*function-pointer*/ void *cfAccessoryPortPropertyCallback;	// G=0x311b862d; S=0x311b863d; @synthesize=_cfAccessoryPortPropertyCallback
@property(assign, nonatomic) void *cfAccessoryPortPropertyContext;	// G=0x311b864d; S=0x311b865d; @synthesize=_cfAccessoryPortPropertyContext
@property(assign, nonatomic) int classType;	// G=0x311b8525; S=0x311b8535; @synthesize=_classType
@property(assign, nonatomic) BOOL connected;	// G=0x311b8379; S=0x311b8389; @synthesize=_connected
@property(assign, nonatomic) unsigned connectionID;	// G=0x311b8399; S=0x311b83a9; @synthesize=_connectionID
@property(assign, nonatomic) id<EAAccessoryDelegate> delegate;	// G=0x311b86a1; S=0x311b86b1; @synthesize=_delegate
@property(assign, nonatomic) unsigned eqIndex;	// G=0x311b85cd; S=0x311b85dd; @synthesize=_eqIndex
@property(retain, nonatomic) NSArray *eqNames;	// G=0x311b8599; S=0x311b85a9; @synthesize=_eqNames
@property(copy, nonatomic) NSString *firmwareRevision;	// G=0x311b8489; S=0x311b8499; @synthesize=_firmwareRevision
@property(copy, nonatomic) NSString *hardwareRevision;	// G=0x311b84bd; S=0x311b84cd; @synthesize=_hardwareRevision
@property(assign, nonatomic) int iPodOutOptionsMask;	// G=0x311b85ed; S=0x311b85fd; @synthesize=_iPodOutOptionsMask
@property(copy, nonatomic) NSString *manufacturer;	// G=0x311b83b9; S=0x311b83c9; @synthesize=_manufacturer
@property(copy, nonatomic) NSString *modelNumber;	// G=0x311b8421; S=0x311b8431; @synthesize=_modelNumber
@property(copy, nonatomic) NSString *name;	// G=0x311b83ed; S=0x311b83fd; @synthesize=_name
@property(copy, nonatomic) NSString *preferredApp;	// G=0x311b84f1; S=0x311b8501; @synthesize=_preferredApp
@property(retain, nonatomic) NSDictionary *protocols;	// G=0x311b866d; S=0x311b867d; @synthesize=_protocols
@property(copy, nonatomic) NSString *serialNumber;	// G=0x311b8455; S=0x311b8465; @synthesize=_serialNumber
@property(readonly, assign, nonatomic) NSArray *sessionsList;	// G=0x311b8369; 
- (id)init;	// 0x311b80e1
- (void)addSession:(id)session;	// 0x311b82a9
// declared property getter: - (id)audioPorts;	// 0x311b8545
// declared property getter: - (unsigned)capabilities;	// 0x311b8579
// declared property getter: - (CFAccessoryRef)cfAccessory;	// 0x311b860d
// declared property getter: - (/*function-pointer*/ void *)cfAccessoryPortPropertyCallback;	// 0x311b862d
// declared property getter: - (void *)cfAccessoryPortPropertyContext;	// 0x311b864d
// declared property getter: - (int)classType;	// 0x311b8525
// declared property getter: - (BOOL)connected;	// 0x311b8379
// declared property getter: - (unsigned)connectionID;	// 0x311b8399
- (void)dealloc;	// 0x311b8149
// declared property getter: - (id)delegate;	// 0x311b86a1
// declared property getter: - (unsigned)eqIndex;	// 0x311b85cd
// declared property getter: - (id)eqNames;	// 0x311b8599
// declared property getter: - (id)firmwareRevision;	// 0x311b8489
// declared property getter: - (id)hardwareRevision;	// 0x311b84bd
// declared property getter: - (int)iPodOutOptionsMask;	// 0x311b85ed
// declared property getter: - (id)manufacturer;	// 0x311b83b9
// declared property getter: - (id)modelNumber;	// 0x311b8421
// declared property getter: - (id)name;	// 0x311b83ed
// declared property getter: - (id)preferredApp;	// 0x311b84f1
// declared property getter: - (id)protocols;	// 0x311b866d
- (void)removeSession:(id)session;	// 0x311b830d
// declared property getter: - (id)serialNumber;	// 0x311b8455
// declared property getter: - (id)sessionsList;	// 0x311b8369
// declared property setter: - (void)setAudioPorts:(id)ports;	// 0x311b8555
// declared property setter: - (void)setCapabilities:(unsigned)capabilities;	// 0x311b8589
// declared property setter: - (void)setCfAccessory:(CFAccessoryRef)accessory;	// 0x311b861d
// declared property setter: - (void)setCfAccessoryPortPropertyCallback:(/*function-pointer*/ void *)callback;	// 0x311b863d
// declared property setter: - (void)setCfAccessoryPortPropertyContext:(void *)context;	// 0x311b865d
// declared property setter: - (void)setClassType:(int)type;	// 0x311b8535
// declared property setter: - (void)setConnected:(BOOL)connected;	// 0x311b8389
// declared property setter: - (void)setConnectionID:(unsigned)anId;	// 0x311b83a9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x311b86b1
// declared property setter: - (void)setEqIndex:(unsigned)index;	// 0x311b85dd
// declared property setter: - (void)setEqNames:(id)names;	// 0x311b85a9
// declared property setter: - (void)setFirmwareRevision:(id)revision;	// 0x311b8499
// declared property setter: - (void)setHardwareRevision:(id)revision;	// 0x311b84cd
// declared property setter: - (void)setIPodOutOptionsMask:(int)mask;	// 0x311b85fd
// declared property setter: - (void)setManufacturer:(id)manufacturer;	// 0x311b83c9
// declared property setter: - (void)setModelNumber:(id)number;	// 0x311b8431
// declared property setter: - (void)setName:(id)name;	// 0x311b83fd
// declared property setter: - (void)setPreferredApp:(id)app;	// 0x311b8501
// declared property setter: - (void)setProtocols:(id)protocols;	// 0x311b867d
// declared property setter: - (void)setSerialNumber:(id)number;	// 0x311b8465
@end

