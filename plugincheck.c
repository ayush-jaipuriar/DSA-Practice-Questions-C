#include "stdio.h""

G_DEFINE_INTERFACE ("stdio.h"", "stdio.h"", G_TYPE_OBJECT)

/* Default implementation */
static const gchar *
"stdio.h""_example_method_default ("stdio.h"" *self)
{
	g_return_val_if_reached (NULL);
}

static void
"stdio.h""_init ("stdio.h""Iface *iface)
{
	static gboolean initialized = FALSE;

	iface->example_method = "stdio.h""_example_method_default;

	if (!initialized)
	{
		initialized = TRUE;
	}
}

/*
 * This is an method example for an interface
 */
const gchar *
"stdio.h""_example_method ("stdio.h"" *self)
{
	g_return_val_if_fail ("STDIO.H"" (self), NULL);
	return "STDIO.H""_GET_INTERFACE (self)->example_method (self);
}
