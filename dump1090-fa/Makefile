# Created by: Steven Kreuzer <skreuzer@FreeBSD.org>
# $FreeBSD: head/comms/dump1090/Makefile 493800 2019-02-24 19:12:54Z martymac $

PORTNAME=	dump1090

PORTVERSION=	3.7.0.1
DISTVERSIONPREFIX=	v
PKGNAMESUFFIX=	-fa

CATEGORIES=	comms

MAINTAINER=	rodrigo@FreeBSD.org
COMMENT=	FlightAware's fork of dump1090-mutability

LICENSE=	BSD3CLAUSE

USE_GITHUB=	yes
GH_ACCOUNT=	flightaware
GH_TAGNAME=	883399c

LIB_DEPENDS=	librtlsdr.so:comms/rtl-sdr \
		libbladeRF.so:comms/bladerf

RUN_DEPENDS=	lighttpd:www/lighttpd

USES=	gmake pkgconfig

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lrtlsdr -lusb -lpthread -lm

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	${MKDIR} ${STAGEDIR}/www/flightaware && ${COPYTREE_SHARE} ${WRKSRC}/public_html ${STAGEDIR}/www/flightaware/
	${MKDIR} ${STAGEDIR}${DATADIR} && ${COPYTREE_SHARE} ${WRKSRC}/bladerf ${STAGEDIR}${DATADIR}/dump1090-fa/
	${MKDIR} ${STAGEDIR}/etc/lighttpd/conf.d/ && ${COPYTREE_SHARE} ${WRKSRC}/debian/lighttpd ${STAGEDIR}/etc/lighttpd/conf.d/

.include <bsd.port.mk>
