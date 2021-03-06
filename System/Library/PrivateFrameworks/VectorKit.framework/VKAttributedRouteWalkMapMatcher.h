/*
* This header is generated by classdump-dyld 0.2
* on Tuesday, October 21, 2014 at 10:03:14 PM Eastern European Summer Time
* Operating System: Version 7.1 (Build 11D167)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKAttributedRouteMapMatcher.h>

@interface VKAttributedRouteWalkMapMatcher : VKAttributedRouteMapMatcher
-(id)findClosestCoordinateAlongSectionsFromDataSource:(id)arg1 forLocation:(id)arg2 useCLMatchedLocation:(bool)arg3 trackedLocation:(id)arg4 onDate:(id)arg5 ;
-(bool)_bestMatchToPolylineSection:(const RouteMapMatchingSection*)arg1 rawLocation:(id)arg2 point:(const VKPoint*)arg3 bounds:(const VKEdgeInsets*)arg4 distanceToSearch:(double)arg5 trackedLocation:(id)arg6 matchParamsCurrentStep:(SCD_Struct_VK131*)arg7 ;
-(SCD_Struct_VK131)_determineBestMatch:(const SCD_Struct_VK131*)arg1 trackedLocation:(id)arg2 rawLocation:(id)arg3 ;
-(double)_maxMatchDistance:(double)arg1 routeIndex:(unsigned long long)arg2 previousMatchGood:(bool)arg3 ;
@end

