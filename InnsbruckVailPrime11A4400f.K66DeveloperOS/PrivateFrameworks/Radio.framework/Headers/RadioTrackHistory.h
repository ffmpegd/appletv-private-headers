/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

#import </libobjc.A.h>
#import "RadioManagedObjectWrapperProtocol.h"

@class NSManagedObject, NSDate, NSManagedObjectContext, NSString;

@interface RadioTrackHistory : NSObject <RadioManagedObjectWrapperProtocol> {
	NSManagedObjectContext *_context;	// 4 = 0x4
	NSManagedObject *_managedObject;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSManagedObjectContext *context;	// G=0x3264e711; @synthesize=_context
@property(assign, nonatomic) NSDate *date;	// G=0x3264dc39; S=0x3264de41; 
@property(readonly, assign, nonatomic) NSManagedObject *managedObject;	// G=0x3264e721; @synthesize=_managedObject
@property(assign, nonatomic) NSString *stationHash;	// G=0x3264e08d; S=0x3264e281; 
@property(assign, nonatomic) long long stationID;	// G=0x3264de91; S=0x3264e04d; 
@property(assign, nonatomic) NSString *stationName;	// G=0x3264e2d1; S=0x3264e4c5; 
@property(assign, nonatomic) long long trackStoreID;	// G=0x3264e515; S=0x3264e6d1; 
- (id)initWithManagedObject:(id)managedObject context:(id)context;	// 0x3264d929
- (void).cxx_destruct;	// 0x3264e731
- (void)_radioModelWasDeletedNotification:(id)notification;	// 0x3264dc05
// declared property getter: - (id)context;	// 0x3264e711
// declared property getter: - (id)date;	// 0x3264dc39
- (void)dealloc;	// 0x3264da45
- (unsigned)hash;	// 0x3264daed
- (BOOL)isEqual:(id)equal;	// 0x3264db35
// declared property getter: - (id)managedObject;	// 0x3264e721
// declared property setter: - (void)setDate:(id)date;	// 0x3264de41
// declared property setter: - (void)setStationHash:(id)hash;	// 0x3264e281
// declared property setter: - (void)setStationID:(long long)anId;	// 0x3264e04d
// declared property setter: - (void)setStationName:(id)name;	// 0x3264e4c5
// declared property setter: - (void)setTrackStoreID:(long long)anId;	// 0x3264e6d1
// declared property getter: - (id)stationHash;	// 0x3264e08d
// declared property getter: - (long long)stationID;	// 0x3264de91
// declared property getter: - (id)stationName;	// 0x3264e2d1
// declared property getter: - (long long)trackStoreID;	// 0x3264e515
@end
