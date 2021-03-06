/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SAServerBoundCommand.h"
#import "SABaseCommand.h"

@class NSString, NSArray, NSURL, SAStockObject;

@interface SAStockAddCompleted : SABaseCommand <SAServerBoundCommand> {
}
@property(copy, nonatomic) NSString *aceId;	// @dynamic
@property(retain, nonatomic) SAStockObject *aceStock;	// G=0x353d238d; S=0x353d23e1; 
@property(copy, nonatomic) NSURL *identifier;	// G=0x353d241d; S=0x353d2499; 
@property(copy, nonatomic) NSString *refId;	// @dynamic
@property(copy, nonatomic) NSArray *results;	// G=0x353d24f9; S=0x353d2599; 
@property(copy, nonatomic) NSArray *stockReferences;	// G=0x353d2619; S=0x353d2695; 
@property(copy, nonatomic) NSArray *stocks;	// G=0x353d26fd; S=0x353d2779; 
+ (id)addCompleted;	// 0x353d22fd
+ (id)addCompletedWithDictionary:(id)dictionary context:(id)context;	// 0x353d2341
// declared property getter: - (id)aceStock;	// 0x353d238d
- (id)encodedClassName;	// 0x353d22f1
- (id)groupIdentifier;	// 0x353d22e1
// declared property getter: - (id)identifier;	// 0x353d241d
// declared property getter: - (id)results;	// 0x353d24f9
// declared property setter: - (void)setAceStock:(id)stock;	// 0x353d23e1
// declared property setter: - (void)setIdentifier:(id)identifier;	// 0x353d2499
// declared property setter: - (void)setResults:(id)results;	// 0x353d2599
// declared property setter: - (void)setStockReferences:(id)references;	// 0x353d2695
// declared property setter: - (void)setStocks:(id)stocks;	// 0x353d2779
// declared property getter: - (id)stockReferences;	// 0x353d2619
// declared property getter: - (id)stocks;	// 0x353d26fd
@end

