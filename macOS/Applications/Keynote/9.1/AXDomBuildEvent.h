//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AXValidatingElement.h"

#import "AXBuildEvent.h"

@interface AXDomBuildEvent : AXValidatingElement <AXBuildEvent>
{
}

+ (void)initialize;
- (void)validateSelf;
- (void)axSetDrawableToBuild:(id)arg1;
- (id)axGetDrawableToBuild;
- (void)axSetDelivery:(int)arg1;
- (int)axGetDelivery;
- (void)axSetBuildDuration:(double)arg1;
- (double)axGetBuildDuration;
- (void)axSetBuildStyle:(id)arg1 withProperties:(id)arg2;
- (id)axGetBuildStyleProperties;
- (id)axGetBuildStyleType;

@end

