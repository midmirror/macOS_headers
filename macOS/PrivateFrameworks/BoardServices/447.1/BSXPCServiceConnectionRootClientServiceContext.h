//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <BoardServices/BSXPCServiceConnectionRootContext.h>

@class NSString;

@interface BSXPCServiceConnectionRootClientServiceContext : BSXPCServiceConnectionRootContext
{
    BOOL _privileged;
}

+ (id)uniqueClientContextWithServiceName:(id)arg1 privileged:(BOOL)arg2;
@property(readonly, nonatomic, getter=isPrivileged) BOOL privileged; // @synthesize privileged=_privileged;
- (BOOL)isClient;
@property(readonly, copy, nonatomic) NSString *serviceName;
- (id)_initWithService:(id)arg1 privileged:(BOOL)arg2;

@end

