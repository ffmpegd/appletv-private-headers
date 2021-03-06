/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NetflixNrdObjectProtocol.h"
#import "NetflixNrdObject.h"

@class NSArray;

@interface NetflixLog : NetflixNrdObject <NetflixNrdObjectProtocol> {
}
@property(copy) NSArray *traceAreas;	// G=0x494771; S=0x494815; 
+ (id)sharedInstance;	// 0x494659
- (id)init;	// 0x494745
- (void)debug:(id)debug;	// 0x494891
- (void)error:(id)error;	// 0x4948b9
- (void)fatal:(id)fatal;	// 0x4948cd
- (BOOL)handleEvent:(id)event;	// 0x494955
- (void)info:(id)info;	// 0x4948a5
- (void)log:(unsigned)log message:(id)message;	// 0x494865
// declared property setter: - (void)setTraceAreas:(id)areas;	// 0x494815
- (void)trace:(id)trace;	// 0x4948e1
// declared property getter: - (id)traceAreas;	// 0x494771
@end

